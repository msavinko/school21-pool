#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(void)
{
	char	t[] = {"Hello\n"};
	int len = ft_strlen(t);
	printf("%d", len);
	return (0);
}
