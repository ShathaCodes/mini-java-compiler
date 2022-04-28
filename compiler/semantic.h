#ifndef HEADER_FILE
#define HEADER_FILE

const int MAX = 100; 	// Size Max of Symbol table
  
typedef struct node {
    char * identifier;
	char * scope; 
	char * type;
	int test_init;
	int test_use;
    int lineNo;
    struct node* next;
   
} Node;
  
int hashf(char * id); // hash function

int insert( char * id,  char * scope,  char * Type, int lineno, int test_init , int test_use);
  
Node * find( char * id);
  
int deleteRecord( char * id);
  
int modify( char * id,  char * scope,  char * Type, int lineno, int test_init , int test_use);

void insert_declaration( char * id,  char * scope,  char * Type, int lineno, int test_init , int test_use);
    
void verif_var_dec_bien_init_use();
    
void init_var( char * id);
    
void use_var( char * id);

void print();

#endif
