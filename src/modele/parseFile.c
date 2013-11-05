#include "parseFile.h"

struct grid* parse_file(char* file_name)
{
	struct grid* grid = NULL;
	FILE* fd = NULL;
	unsigned int nb_row, nb_column;
	char type;
	//Open file and create grid

	parse_file_information(fd, &nb_row, &nb_column, &type);
	generate_all_square(grid, nb_row, nb_column);
	parse_file_value(fd, grid);
	parse_file_group(fd, grid);
	parse_file_relation(fd, grid);
	
	return grid;
}

void parse_file_relation(FILE* fd, struct grid* grid)
{

}

void parse_file_group(FILE* fd, struct grid* grid)
{

}

void parse_file_value(FILE* fd, struct grid* grid)
{

}

void parse_file_information(FILE* fd, unsigned int* nb_row, unsigned int* nb_column, char* type)
{

}

void generate_all_square(struct grid* grid, unsigned int nb_row, unsigned int nb_column)
{

}

void delete_grid(struct grid* grid)
{
	if(grid != NULL)
	{
		empty_grid(grid);
		free(grid);
	}
}
void empty_grid(struct grid* grid)
{
	if(grid != NULL)
	{
		if(grid->a_group != NULL)
		{
			for(int i = 0; i < grid->size_a_group; i++)
			{
				empty_group(grid->a_group[i]);
			}
			free(grid->a_group);
			grid->a_group = NULL;
			grid->size_a_group = 0;
		}
		if(grid->a_all_square != NULL)
		{
			free(grid->a_all_square);
			grid->a_all_square = NULL;
			grid->size_a_all_square = 0;
		}
		if(grid->a_relation != NULL)
		{
			free(grid->a_relation);
			grid->a_relation = NULL;
			grid->size_a_relation = 0;
		}
	}
}

void empty_group(struct group group)
{
	if(group.a_square != NULL)
	{
		free(group.a_square);
	}
	group.a_square = NULL;
	group.size = 0;
}
