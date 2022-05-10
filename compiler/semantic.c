
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

Node * head[100];   

extern int line;


//------------------------------------------------------- Function to insert an identifier
int insert(char * id, char * scope, char * type,   int test_init , int test_use, int nbr_args)
{
    int index = search_index();
    Node* p = (Node *) malloc (sizeof (Node));
    p->identifier = id;
    p->scope = scope;
    p->type = type;
    p->test_init = test_init;
    p->test_use = test_use;
    p->nbr_args = nbr_args;
      
    if (head[index] == NULL) {
        head[index] = p;
        //print(p);
        return 1;
    }
  
    return 0;
}

  
//------------------------------------------------------- Function to modify an identifier
int  modify(char * id, char * scope, char * type,   int test_init ,int test_use, int nbr_args )
{
    Node* start = find(id);
  
    if (start != NULL) {
            start->scope = scope;
            start->type = type;
            start->test_init = test_init;
            start->test_use = test_use;
            start->nbr_args = nbr_args;
            return 1;
    }
  
    return 0; // id not found
}
  
//------------------------------------------------------- Function to find an identifier
Node *  find(char * id)
{
    int i;
    for (i = 0; i< 100; i++){
        Node* start = head[i];
        if (start != NULL && strcmp(start->identifier,id) == 0 ){
            return start;
        }
    }
    return NULL; // not found
    
}

int  find_index(char * id)
{
    int i;
    for (i = 0; i< 100; i++){
        Node* start = head[i];
        if (start != NULL && strcmp(start->identifier,id) == 0 ){
            return i;
        }
    }
    return -1; // not found
    
}

int search_index(){
    int i;
    for (i = 0; i< 100; i++){
        if (head[i] == NULL ){
            return i;
        }
    }
    printf("ERROR : table overflown.");
    return -1 ;
}
  

//------------------------------------------------------- Verifier la redefinition des variables deja declarees 

void  insert_declaration(char * id, char * scope, char * type,   int test_init , int test_use ,int nbr_args){
    Node * x = find(id);
    if (x != NULL && strcmp(x->scope,"args") != 0){
    	printf("ERROR on line #%d : Variable %s is already defined. \n", line, x->identifier);
	}
    else
        insert(id, scope, type, test_init , test_use, nbr_args);

}

//------------------------------------------------------- Verifier qu'une variable declaree est bien utilisee => parcours table

void  verif_var_used(){
	int i;
    for ( i = 0; i < MAX; i++){
    	Node * current = head[i] ; 
    	if (current != NULL && strcmp(current->type,"methode") != 0 && strcmp(current->scope,"args") != 0 ){ 				// case non vide
			if(current->test_init == 0 ){ 	// car non initialise
				printf("WARNING: Variable  %s  initialized but not used.  \n",current->identifier);
			}
			 
			else if(current->test_use == 0){ // car non utilise
			printf("WARNING: Variable  %s  defined but non used.  \n",current->identifier);
			}
		}
	}  
}
//------------------------------------------------------- Function to use a variable

int use_var(char * id)
{

    Node* x=find(id);
    int index = find_index(id);
    if (index > -1 )
     if ( x->test_init!=0)
           {
               int k = modify(x->identifier , x->scope, x->type, x->test_init ,1, 0);
                }
        else 
            {
            printf("ERROR on line %d : variable  %s might not have been initialized. \n",line,x->identifier);

        }
    //else
        //printf("ERROR on line %d :  cannot find symbol %s.\n",line, id);
    return index;


}
//------------------------------------------------------- Function to initialize var


int  init_var(char * id)
{

    Node* x=find(id);
    int index = find_index(id);
    if (x!=NULL ){
        int k = modify(x->identifier , x->scope, x->type, 1 ,x->test_use, 0);
    }
        
    else
        
        printf("ERROR on line %d : cannot find symbol %s.\n",line, id);
    return index;
}


void print(Node * node){
    printf("%s  scope=%s type=%s , %d %d , args=%d \n", node->identifier, node->scope, node->type,node->test_init, node->test_use, node->nbr_args );
}



void verif_args(char* id, int nbr){
    Node* x=find(id);
    if (x!=NULL && strcmp(x->type, "methode") ==0 ) // methode existe
        { 
        if(x->nbr_args > nbr){
            printf("ERROR on line #%d : insufficient number of arguments.\n",line);
        }
        else if(x->nbr_args < nbr){
            printf("ERROR on line #%d : too many arguments, must give %d.\n",line,x->nbr_args);
        }
        }
    else
        printf("ERROR on line #%d : function '%s' is not defined.\n",line, id);
}
