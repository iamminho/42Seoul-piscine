#include <unistd.h>

void print(int c)
{
	char	v;
	if (c < 10)
	{
		v = c + '0';
		write(1, &v, 1);
	}
	else
	{
		print(c / 10);
		v = (c % 10) + '0';
		write(1, &v, 1);
	}
}

int	main(void){
	int	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(num % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(num % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			print(num);
		write(1, "\n", 1);
		num++;
	}
}