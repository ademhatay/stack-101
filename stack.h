#include <stdio.h>
#include <stdlib.h>

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

# define MAXA 10
# define MAXB 10

typedef struct stack1 {
	int items[MAXA];
	int top;
	int count;
} stA;

typedef struct stack2 {
	int items[MAXB];
	int top;
	int count;
} stB;

void createEmptyStackA(stA *s);
int isFullA(stA *s);
int isEmptyA(stA *s);
void pushA(stA *s, int newItem);
void popA(stA *s);
void printStackA(stA *s);

void createEmptyStackB(stB *s);
int isFullB(stB *s);
int isEmptyB(stB *s);
void pushB(stB *s, int newItem);
void popB(stB *s);
void printStackB(stB *s);

void alert(char *type, char *msg);