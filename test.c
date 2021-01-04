#include "../printf/include/printf.h"

int	ft_printf(const char *s, ...);
int	is_valid(char c);
t_param param_default(void);
void print_struct(t_param);
int	check_reverse(t_param *param, char const *str,int pos);


int	n = 42;
char c = 'A';
char str[100] = "eric";
unsigned int u_n = -1;


int main()
{	
int	i;
const char s[100] = "%----1-0000-";
t_param param;

i = 0;

param = param_default();
//printf("%d\n",check_reverse(&param, s, i));
printf("%-0-0-d",42);
/*
 

*/
	return (0);
}
