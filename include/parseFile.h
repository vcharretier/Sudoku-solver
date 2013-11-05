#ifndef  parseFile_INC
#define  parseFile_INC

#include <stdlib.h>
#include <stdio.h>
#include "header.h"


struct grid* parse_file(char* file_name);

void parse_file_relation(FILE* fd, struct grid* grid);

void parse_file_group(FILE* fd, struct grid* grid);

void parse_file_value(FILE* fd, struct grid* grid);

void parse_file_information(FILE* fd, unsigned int* nb_row, unsigned int* nb_column, char* type);

void generate_all_square(struct grid* grid, unsigned int nb_row, unsigned int nb_column);

void delete_grid(struct grid* grid);

void empty_grid(struct grid* grid);

void empty_group(struct group group);

#endif
