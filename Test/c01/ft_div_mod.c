#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
	int a = 9;
	int b = 2;
	int div = 0;
	int mod = 0;
	printf("%d, %d, %d, %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d, %d, %d\n", a, b, div, mod);
}