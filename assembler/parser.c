#include "parser.h"

void parser_init(struct Parser *parser, char *file_contents) {
	// Point Parser's file_contents at parameter
	parser->file_contents = file_contents;
	
	// Set current command to first line of file
	
}

int has_more_commands(Parser *parser) {

	return 0;
}

void advance(Parser *parser) {

}

Command_Type command_type(Parser *parser) {

	return A_COMMAND;
}

char *symbol(Parser *parser) {

}

char *dest(Parser *parser) {

}

char *comp(Parser *parser) {

}

char *jump(Parser *parser) {

}