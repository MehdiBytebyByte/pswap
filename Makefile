CC =  cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = push_swap
SRCS = Pushswap.c Pushtools.c\

OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h
all: $(NAME)
do:	$(NAME)
	rm -f $(OBJS)
%.o: %.c $(HEADER)
	$(CC) -Wall -Wextra -Werror -c $< -o $@
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean