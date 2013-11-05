#include <stdio.h>
#include "header.h"
#include "parseFile.h"

void solve_sudoku(char* file_name);

int main(int argc, char *argv[])
{
	printf("[i] Beginning\n");
	if (argc < 2)
	{
		printf("Usage : %s <file1> <file2> ...\n", argv[0]);
		return 0;
	}

	for (int i = 2; i < argc; i++)
	{
		solve_sudoku(argv[i]);
	}
	printf("[i] End\n");
	return 0;
}

void solve_sudoku(char* file_name)
{
	struct grid* grid = NULL;
	
	grid = parse_file(file_name);
		//generate equation
		//convert equation for SAT solver

		//check if the solution is good
		//print solution
	delete_grid(grid);
	grid = NULL;
}
