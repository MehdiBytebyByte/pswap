CC =  cc
# CFLAGS = -Wall -Werror -Wextra -g
NAME = push_swap
SRCS = Pushswap.c Pushtools.c stackbuid.c Pushtools2.c checks.c operations.c

OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h
all: $(NAME)
do:	$(NAME)
	rm -f $(OBJS)
%.o: %.c $(HEADER)
	$(CC) -c $< -o $@
# hadi kant fo9 had ster -Wall -Wextra -Werror 
$(NAME): $(OBJS)
	$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)
# -fsanitize=address
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean