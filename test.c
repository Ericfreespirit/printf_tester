#include "../printf/include/printf.h"

int	ft_printf(const char *s, ...);
int	is_valid(char c);
t_param param_default(void);
void print_struct(t_param);
void ft_putnbr(int nb);
int	clean_int(int nb);




int	n = 42;
char c = 'A';
char str[100] = "eric";
unsigned int u_n = -1;


int main()
{	

	//printf("%08d\n",1234567);
	//printf("%-8d\n",1234567);
	//printf("%-0-0-000-i\n",1234567);


	//printf("%-012.*d",10,123456789);

	// == TEST: if precision enable 'o' with width == 
	//printf("%12.*d",10,123456789);
	//printf("%012.10d",123456789);
	//printf("%011.10d",123456789);
	//printf("%011.d",123456789);

	// == TEST: if precision is neg or only '.' ==
	//printf("%-10.3d\n",42);

	// == TEST: if precision with '0' is ignored

	// == TEST: if precision with '-'
	//printf("%-4.3d",1);
	//printf("%4.3d",1);

	//== PROBLEM: ˆ@ at at the end of %d 
	//ft_printf("%03d",42);
	//ft_printf("%-3d",42);

	printf("%d\n", clean_int(42));



	return (0);
}
