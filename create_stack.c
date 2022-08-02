#include "stack.h"

void init_stacks(stA *s, stB *s1)
{
	createEmptyStackA(s);
	createEmptyStackB(s1);
}

void load_stacks(stA *s, stB *s1)
{
	pushA(s, 3);
	pushA(s, 1);
	pushA(s, 2);
	popB(s1);
}

void printStacks(stA *s, stB *s1)
{
	printStackA(s);
	printStackB(s1);
}

// Main 
int main() 
{
	stA *s = (stA *)malloc(sizeof(stA));
	stB *s1 = (stB *)malloc(sizeof(stB));
	init_stacks(s, s1);
	load_stacks(s, s1);

	printf("%d\n", s->count);

	printStacks(s, s1);
}