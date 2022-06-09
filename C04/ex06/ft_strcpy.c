#include <stdio.h>
char	*ft_strcpy(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

int main(void)
{
	char *s;
	char dest[100] = "acv";
	char str[100] = "xcva";
	s = ft_strcpy(dest, str);
	printf("%s", s);
}

