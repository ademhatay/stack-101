#include "stack.h"

// creating a Stack
void createEmptyStackA(stA *s)
{
	s->top = -1;
}

// check if the Stack is full
int isFullA(stA *s)
{
	if (s->top == MAXA - 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

// check if the Stack empty
int isEmptyA(stA *s)
{
	if (s->top == -1)
		return (1);
	else
		return (0);
}


// Add element into Stack
void pushA(stA *s, int newItem)
{
	if (isFullA(s))
		alert("ERR", "STACK A DOLU!");
	else
	{
		s->top++;
		s->items[s->top] = newItem;
		alert("SUCCESS", "A-> İtem Eklendi: ");
		printf("\x1b[33m%d\x1b[0m\n", newItem);
	}
	s->count++;
}

// Remove element from Stack
void popA(stA *s)
{
	if (isEmptyA(s))
		alert("ERR", "STACK A BOŞ!");
	else
	{
		alert("DEL", "A-> İtem Silindi: ");
		printf(ANSI_COLOR_MAGENTA "%d\n" ANSI_COLOR_RESET, s->top);
		s->top--;
	}
	s->count--;
}

// Print element of Stack

void printStackA(stA *s) 
{
  printf("Stack A: ");
  for (int i = 0; i < s->count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}




// creating a Stack
void createEmptyStackB(stB *s1)
{
	s1->top = -1;
}

// check if the Stack is full
int isFullB(stB *s1)
{
	if (s1->top == MAXB - 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

// check if the Stack empty
int isEmptyB(stB *s1)
{
	if (s1->top == -1)
		return (1);
	else
		return (0);
}


// Add element into Stack
void pushB(stB *s1, int newItem)
{
	if (isFullB(s1))
		alert("ERR", "STACK B DOLU!");
	else
	{
		s1->top++;
		s1->items[s1->top] = newItem;
		alert("SUCCESS", "B-> İtem Eklendi: ");
		printf("\x1b[33m%d\x1b[0m\n", newItem);
	}
	s1->count++;
}

// Remove element from Stack
void popB(stB *s1)
{
	if (isEmptyB(s1))
		alert("ERR", "STACK B BOŞ!");
	else
	{
		alert("DEL", "B-> İtem Silindi: ");
		printf(ANSI_COLOR_MAGENTA "%d\n" ANSI_COLOR_RESET, s1->top);
		s1->top--;
	}
	s1->count--;
}

// Print element of Stack

void printStackB(stB *s1) 
{
  printf("Stack B: ");
  for (int i = 0; i < s1->count; i++) {
    printf("%d ", s1->items[i]);
  }
  printf("\n");
}