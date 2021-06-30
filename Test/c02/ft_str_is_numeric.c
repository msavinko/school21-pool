#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char str[] = {""};
	printf("%d", ft_str_is_numeric(str));
	return (0);
}
