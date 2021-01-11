NAME	= libft.a
HEAD := -I../ft_printf/include
CFLAGS = -Wall -Wextra -Werror
SRC := ../ft_printf/*.c\
	../ft_printf/*/*.c
all :	$(NAME)

$(NAME) :
			@gcc -c ${CFLAGS} ${HEAD} ${SRC}
			@ar rc $(NAME) *.o
			@ranlib $(NAME)
			@gcc libft.a main.c
			@rm -f *.o
			@rm libft.a
			@mv a.out result
			@echo "\033[0;32mCompiled\033[0m"
			@./result | cat -e
clean :
			@rm -f *.o

fclean :	clean
			@rm -f $(NAME) 
			@rm -f result
			@echo "\033[1;31mDelete all\033[0m"

re :		fclean all
