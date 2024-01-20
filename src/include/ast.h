#ifndef AST_H
#define AST_H
#include <stdlib.h>


typedef struct AST_STRUCT
{
	enum {
		AST_FUNCTION_CALL,
		AST_VARIABLE_DEF,
		AST_VARIABLE,
		AST_STRING,
	} type;

	// AST VARIABLE DEFINITION
	char* variable_def_variable_name;
	struct AST_STRUCT* variable_def_name;

	//AST VARIABLE
	char* variable_name;

	//AST FUNCTION CALL
	char* function_call_name;
	struct AST_STRUCT* function_call_arguments;
	size_t function_call_arguements_size;

	//AST STRING
	char* string_value;
} AST_T;

AST_T* init_ast(int type);



#endif
