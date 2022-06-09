#include <unistd.h>

void print(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av){
	if(ac > 1)
	{
		print(av[ac-1]);
	}
	write(1, "\n", 1);
}

// #include <unistd.h>

// void	ft_str_write(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// int		main(int argc, char **argv)
// {
// 	if (argc > 1)
// 		ft_str_write(argv[argc - 1]);
// 	ft_str_write("\n");
// }