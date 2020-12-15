 #include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *s, ...);
int	is_valid(char c);

//list all output for parsing
void	parsing_flag()
{
	int	i;
	i = 14;

	printf("==== Start to the End of format ====\n");
	//printf("%d]%d%d%d",i++);

}

// TODO when passing done make norminette
int main()
{	
	//parsing_flag();

	ft_printf("hello\n");
	ft_printf("%chello\n");
	ft_printf("%c%s%d%i%u%p%x%Xhello\n");
	ft_printf("%mhello\n");
	ft_printf("1%");

		return (0);
}
