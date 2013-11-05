#ifndef  header_INC
#define  header_INC
struct square
{
	unsigned int x;
	unsigned int y;
	unsigned int value;
#define EMPTY_VALUE 0
};
struct group
{
	struct square ** a_square;
	unsigned int size;
};
struct relation
{
	struct square * inf;
	struct square * sup;
};
struct grid
{
	struct group* a_group;
	unsigned int size_a_group;
	struct square * a_all_square;
	unsigned int size_a_all_square;
	struct relation * a_relation;
	unsigned int size_a_relation;
};
#endif
