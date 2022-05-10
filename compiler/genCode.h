extern int line;

  
typedef struct entree {
    char* code_op;
	int operande;
	char* nomFct;
   
} entree;
  
int search_index_code(); 

int insert_code( char* code_op, int operande, char* nomFct);

int insert_op( char* op);
    
void print_code();

