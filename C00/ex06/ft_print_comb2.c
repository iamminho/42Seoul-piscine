/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milee2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:21:27 by milee2            #+#    #+#             */
/*   Updated: 2022/05/22 21:01:32 by milee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	makenum(int num, char *str)
{
	if (num < 10)
	{
		str[0] = '0';
		str[1] = num + '0';
	}
	else
	{
		str[0] = (num / 10) + '0';
		str[1] = (num % 10) + '0';
	}
}

void	ft_print_comb2(void)
{
	char	front[3];
	char	rear[3];
	int		a;	
	int		b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		makenum(a, front);
		makenum(b, rear);
		write(1, front, 2);
		write(1, " ", 1);
		write(1, rear, 2);
		write(1, ", ", 2);
		if (a < 98)
			b++;
		if (b == 100)
		{
			a++;
			b = a + 1;
		}
	}
	write(1, "98 99", 5);
}
