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
	pushB(s1, 0);
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

	if (s->count == 3)
	{
		int tmp;

		tmp = s ->top;
		pushB(s1, tmp);
		popA(s);
	}

	printStacks(s, s1);
}