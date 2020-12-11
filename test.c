#include <stdio.h>
#include <stdlib.h>


char	*simple_conv()
{
	char *ptr;

	if (!(ptr = malloc(sizeof(*ptr)* 5)))
	return ("Malloc problem");
	ptr = "eric";

	//1 cspdiuxX
	printf("1) cspdiuxX\n");

	printf("printf:%c\n",'o');
	
	printf("printf:%s\n","Est-ce que ça marche ?");
	
	printf("printf:%p\n",ptr);
	
	printf("printf:%d\n",42);
	
	printf("printf:%i\n",42);
	
	printf("printf:%u\n",-2);
	
	printf("printf:%x\n",42);
	
	printf("printf:%X\n",42);

	//2 special case
	printf("2) special case\n");
	//3 multiple arg and conv
	printf("3) multiple arg and conv\n");
	//4 flags everywhere
	printf("4) flags everywhere\n");

	return("simple_conv test\n");
}



int main()
{
	printf("%s",simple_conv());
	printf("--------------------\n");
	return (0);
}
