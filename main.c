#include "../ft_printf/include/printf.h"

int	ft_printf(const char *s, ...);
int	is_valid(char c);
t_param param_default(void);
void print_struct(t_param);
void ft_putnbr(int nb);
int	clean_int(int nb);




	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";


int main()
{	
	//ft_printf(" --- Return : %d\n", ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d)); //T3
	//printf("\nRESULTAT = %d\n",printf("%10.*s",2,"eric"));
	ft_print("%d",1234);
	return (0);
}
