CC =  cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRCS = Pushswap.c \
tools/Pushtools.c tools/Pushtools2.c tools/Pushtools3.c tools/split.c \
stackbuild/stackbuild.c stackbuild/stackbuild2.c \
checks/checks.c operations/pushandswap.c operations/rotate.c \
operations/reverserotate.c sort/sort.c sort/assigner.c sort/sort3.c

OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h
all: $(NAME)
do:	$(NAME)
	rm -f $(OBJS)
%.o: %.c $(HEADER)
	$(CC) -c $< -o $@ -Wall -Wextra -Werror 
$(NAME): $(OBJS)
	$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)
# -fsanitize=address
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean