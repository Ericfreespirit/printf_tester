#include "../printf/include/printf.h"

int	ft_printf(const char *s, ...);
int	is_valid(char c);
t_param param_default(void);
void print_struct(t_param);



int	n = 42;
char c = 'A';
char str[100] = "eric";
unsigned int u_n = -1;


int main()
{	

	//printf("%08d",1234567);
	//printf("%-8d",1234567);
	printf("%010*i",9,1234567);
	//printf("%08d",1234567);
	//printf("%08d",1234567);

	return (0);
}
