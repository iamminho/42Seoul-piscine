/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milee2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:27:45 by milee2            #+#    #+#             */
/*   Updated: 2022/05/22 21:09:30 by milee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *ch)
{
	char	v;
	int		i;

	i = 0;
	while (ch[i] != '\0')
	{
		v = ch[i];
		write(1, &v, 1);
		i++;
	}
}

void	dfs(int L, int v, int n, char *ch)
{
	if (L == n)
	{
		print(ch);
		if (ch[0] - '0' != 10 - n)
			write(1, ", ", 2);
	}
	else
	{
		while (v < 11 - n + L)
		{
			ch[L] = v + '0';
			dfs(L + 1, v + 1, n, ch);
			v++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	ch[10];

	dfs(0, 0, n, ch);
}
