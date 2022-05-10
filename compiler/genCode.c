
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genCode.h"

entree * tabCodeInt[100];   

extern int line;

//------------------------------------------------------- Basic Functions
int insert_code( char* code_op, int operande, char* nomFct)
{
    int index = search_index_code();
    entree* ec = (entree *) malloc (sizeof (entree));
    ec->code_op = code_op;
    ec->operande = operande;
    ec->nomFct = nomFct;
      
    if (tabCodeInt[index] == NULL) {
        tabCodeInt[index] = ec;
        //print(ec);
        return 1;
    }
    return 0;
}
int insert_op( char* op){
    char * code_op = "";
    if(strcmp(op, "+") == 0)
        code_op = "ADD";
    if(strcmp(op, "-") == 0)
        code_op = "SUB";
    if(strcmp(op, "*") == 0)
        code_op = "MUL";
    if(strcmp(op, "/") == 0)
        code_op = "DIV";
    if(strcmp(op, "<") == 0)
        code_op = "INF";
    if(strcmp(op, ">") == 0)
        code_op = "SUP";
    if(strcmp(op, "==") == 0)
        code_op = "EGAL";
    if(strcmp(op, "!=") == 0)
        code_op = "DIF";
    return insert_code(code_op,-1,"");
}

int search_index_code(){
    int i;
    for ( i = 0; i< 100; i++){
        if (tabCodeInt[i] == NULL ){
            return i;
        }
    }
    printf("ERROR : table overflown.");
    return -1 ;
}

void print_code() {
    int i;
    for ( i = 0; i< 100; i++){
        if (tabCodeInt[i] == NULL ){
            return;
        }
        if (tabCodeInt[i]->operande == -1 ){
            printf("%s \n", tabCodeInt[i]->code_op);
        }
        else
            printf("%s %d \n", tabCodeInt[i]->code_op, tabCodeInt[i]->operande);
    }
}