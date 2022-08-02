NAME = stack

VERSION = 0.1

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = create_stack.c \
	stack_utils.c \
	utils.c \

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
