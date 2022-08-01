#include <stdio.h>
#include <stdlib.h>

# define MAX 10

 int count = 0;

// creating a Stack

struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s)
{
	s->top = -1;
}

// check if the Stack is full
int isFull(st *s)
{
	if (s->top == MAX - 1)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

// check if the Stack empty
int isEmpty(st *s)
{
	if (s->top == -1)
		return (1);
	else
		return (0);
}


// Add element into Stack
void push(st *s, int newItem)
{
	if (isFull(s))
		printf("STACK DOLU KARŞİMM!");
	else
	{
		s->top++;
		s->items[s->top] = newItem;
		printf("ITEM EKLENDI => %d\n", newItem);
	}
	count++;
}

// Remove element from Stack
void pop(st *s)
{
	if (isEmpty(s))
		printf("STACK BOŞŞ KARŞİMM!");
	else
	{
		printf("ITEM SİLİNDİ=> %d\n", s->items[s->top]);
		s->top--;
	}
	count--;
}

// Print element of Stack

void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

// Main 
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  printf("\nSonuncu Kaldırıldıktan sonra Stack\n");
  printStack(s);
}