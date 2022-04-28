
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

Node * head[100];            
int taille = 0;

//------------------------------------------------------- Function to insert an identifier
int insert(char * id, char * scope, char * type, int lineNo, int test_init , int test_use)
{
    int k;
    printf("in\n");
    int index = hashf(id);
    printf("%s ",id);
    printf("%d ",index);
    Node* p = (Node *) malloc (sizeof (Node));
    p->identifier = id;
    p->scope = scope;
    p->type = type;
    p->lineNo = lineNo;
    p->test_init = test_init;
    p->test_use = test_use;
    printf("inserted ");
      
    if (head[index] == NULL) {
        printf("here");
        head[index] = p;
        printf("on line %d",head[index]->lineNo);
        taille++;
        printf("\n %d  inserted", index);
        return 1;
    }
  
    else {printf("there");
        Node* start = head[index];
        while (start->next != NULL)
            start = start->next;
        start->next = p;
        printf("%d",(start->next)->test_init);
        printf("\n %d  inserted", index);
  		taille ++;
        return 1;
    }
  
    return 0;
}

  
//------------------------------------------------------- Function to modify an identifier
int  modify(char * id, char * scope, char * type, int lineNo, int test_init ,int test_use)
{
    int index = hashf(id);
    Node* start = head[index];
  
    if (start == NULL)
        return -1;
  
    while (start != NULL) {
        if (strcmp(start->identifier,id)) {
            start->scope = scope;
            start->type = type;
            start->lineNo = lineNo;
            start->test_init = test_init;
            start->test_use = test_use;
            return 1;
        }
        start = start->next;
    }
  
    return 0; // id not found
}
  
//------------------------------------------------------- Function to find an identifier
Node *  find(char * id)
{
    
    int index = hashf(id);
    printf("%d", index);
    Node* start = head[index];
    
    if (start == NULL)
        return NULL;

    else  {
            printf("%s", start->identifier);
            return start;
    }
    printf("done");
    return NULL; // not found
}
  

  
int  hashf(char * id)
{
    int asciiSum = 0;
    int i;
  
    for (i = 0; i < strlen(id); i++) {
        asciiSum = asciiSum + id[i];
    }
  
    return (asciiSum % 100);
} 

//------------------------------------------------------- V�rifier la red�finition des variables d�j� d�clar�es 

void  insert_declaration(char * id, char * scope, char * type, int lineno, int test_init , int test_use){
    printf("hereeeeee");
    Node * x = find(id);
    printf("hereeeeee");
    if (x != NULL){
    	printf("ERROR: Variable  %d  deja declaree a la ligne # %d . \n", x->identifier,x->lineNo);
	}
    insert(id, scope, type, lineno, test_init , test_use);

}

//------------------------------------------------------- V�rifier qu�une variable d�clar�e est bien utilis�e => parcours table

void  verif_var_dec_bien_init_use(){
	int i;
    for ( i = 0; i < MAX; i++){
    	Node * current = head[i] ; 
    	if (current != NULL ){ 				// case non vide
			if(current->test_init == 0 ){ 	// car non initialis� 
			    int index = hashf(current->identifier);
				printf("WARNING:  La Variable  %d  declaree mais non initialisee  la ligne # %d .  \n", index,current->lineNo);
			}
			 
			else if(current->test_use == 0){ // car non utilise
			int index = hashf(current->identifier);
			printf("WARNING:  La Variable  %d  declaree mais non initialisee  la ligne # %d .  \nn", index,current->lineNo);
			}
		}
	}  
}
//------------------------------------------------------- Function to  use 

void    use_var(char * id)
{

    Node* x=find(id);
    if (x!=NULL )
     if ( x->test_init!=0)
           {
               modify(x->identifier , x->scope, x->type, x->lineNo, x->test_init ,1);
                }
        else 
            {
            printf("\n variable utilise mais pas initialiser . \n");

        }
    else
        {
        printf("\nvariable non decalree .\n");
       }


}
//------------------------------------------------------- Function to  init var


void  init_var(char * id)
{

    Node* x=find(id);
    if (x!=NULL )
        { 
        modify(x->identifier , x->scope, x->type, x->lineNo, 1 ,x->test_use);
        }
    else
        {
        printf("\nvariable non decalree .\n");
       }


}
