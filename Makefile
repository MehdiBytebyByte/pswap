NAME = push_swap
SRCS = Pushswap.c \
tools/Pushtools.c tools/Pushtools2.c tools/Pushtools3.c tools/split.c \
stackbuild/stackbuild.c \
checks/checks.c operations/pushandswap.c operations/rotate.c \
operations/reverserotate.c sort/sort.c sort/assigner.c sort/sort2.c sort/sort3.c

OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h
all: $(NAME)
%.o: %.c $(HEADER)
	cc -c $< -o $@ -Wall -Wextra -Werror
$(NAME): $(OBJS)
	cc  -Wall -Wextra -Werror $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean