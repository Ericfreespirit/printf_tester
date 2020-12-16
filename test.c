 #include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *s, ...);
int	is_valid(char c);
int	n = 42;
char c = 'A';
char str[5] = "eric";
unsigned int u_n = -1;
//list all output for parsing
void	parsing_flag()
{
	printf("==== width ====\n");
	printf("%5d\n",n);
	printf("%5i\n",n);
	printf("%5c\n",c);
	printf("%5s\n",str);
	printf("%5p\n",str);
	printf("%5u\n",u_n);
	printf("%5x\n",n);
	printf("%5X\n",n);

	printf("==== width | '0' ====\n");
	printf("%05d\n",n);
	printf("%05i\n",n);
	printf("%05c\n",c);
	printf("%05s\n",str);
	printf("%05p\n",str);
	printf("%05u\n",u_n);
	printf("%05x\n",n);
	printf("%05X\n",n);

	printf("==== width | '-' ====\n");
	printf("%-5d\n",n);
	printf("%-5i\n",n);
	printf("%-5c\n",c);
	printf("%-5s\n",str);
	printf("%-5p\n",str);
	printf("%-5u\n",u_n);
	printf("%-5x\n",n);
	printf("%-5X\n",n);
	
	printf("==== width | '0' ====\n");
	printf("%05d\n",n);
	printf("%05i\n",n);
	printf("%05c\n",c);
	printf("%05s\n",str);
	printf("%05p\n",str);
	printf("%05u\n",u_n);
	printf("%05x\n",n);
	printf("%05X\n",n);

	printf("==== width | '-' | '0' ====\n");
	printf("%-05d\n",n);
	printf("%-05i\n",n);
	printf("%-05c\n",c);
	printf("%-05s\n",str);
	printf("%-05p\n",str);
	printf("%-05u\n",u_n);
	printf("%-05x\n",n);
	printf("%-05X\n",n);
}

void	parsing_precision()
{
	printf("==== width | '.'  ====\n");
	printf("%05.d\n",n);
	printf("%05.i\n",n);
	printf("%05.c\n",c);
	printf("%05.s\n",str);
	printf("%05.p\n",str);
	printf("%05.u\n",u_n);
	printf("%05.x\n",n);
	printf("%05.X\n",n);
	
	printf("==== width | '*'  ====\n");
	printf("%05*d\n",12,n);
	printf("%05*i\n",12,n);
	printf("%05*c\n",12,c);
	printf("%05*s\n",12,str);
	printf("%05*p\n",12,str);
	printf("%05*u\n",12,u_n);
	printf("%05*x\n",12,n);
	printf("%05*X\n",12,n);
	
	printf("==== width | '.' |'*'  ====\n");
	printf("%05.*d\n",12,n);
	printf("%05.*i\n",12,n);
	printf("%05.*c\n",12,c);
	printf("%05.*s\n",12,str);
	printf("%05.*p\n",12,str);
	printf("%05.*u\n",12,u_n);
	printf("%05.*x\n",12,n);
	printf("%05.*X\n",12,n);
}

int main()
{	
	parsing_flag();
	printf("/////////////////////////////////////\n");
	parsing_precision();
		return (0);
}
