#include "include/ast.h"

AST_T* init_ast(int type)
{
	AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
	ast->type = type;

	// AST VARIABLE DEFINITION	
	ast->variable_def_variable_name = (void*) 0;
	ast->variable_def_name = (void*) 0;

	//AST VARIABLE
	ast->variable_name = (void*)0;

	//AST FUNCTION CALL
	ast->function_call_name = (void*) 0;
	ast->function_call_arguments = (void*) 0;
	ast->function_call_arguements_size = 0;

	//AST STRING
	ast->string_value = (void*) 0;

	return ast;
}

 


