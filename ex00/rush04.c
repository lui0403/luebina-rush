/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:26:21 by luebina           #+#    #+#             */
/*   Updated: 2023/08/13 19:47:53 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	if_func(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x))
	{
		ft_putchar('A');
	}
	else if ((i == y && j == x) || (i == y && j == 1))
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == y || j == 1 || j == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if_func(x, y, i, j);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
