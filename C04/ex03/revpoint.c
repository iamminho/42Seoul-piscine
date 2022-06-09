#include <unistd.h>
char	 *rev_print(char *str)
{
	int idx = 0;
	while(str[idx])
	{
		idx++;
	}
	idx -= 1;
	while(idx>= 0)
	{
		write(1, &str[idx--], 1);
	}
	return str;
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
