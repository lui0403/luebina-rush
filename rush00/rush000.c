/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush000.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhashizu <zume0606@outlook.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:02:26 by rhashizu          #+#    #+#             */
/*   Updated: 2023/08/12 15:44:37 by rhashizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_rush(int x, char head, char middle, char end)
{
	int	count_x;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1)
		{
			ft_putchar(head);
		}
		else if (count_x == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		count_x++;
	}
	write(1, " \n", 2);
}

void	rush(int x, int y)
{
	int	count_y;

	if (x > 0 || y > 0)
	{
		count_y = 1;
		while (count_y <= y)
		{
			if (count_y == 1)
			{
				print_rush(x, 'A', 'B', 'C');
			}
			else if (count_y == y)
			{
				print_rush(x, 'C', 'B', 'C');
			}
			else
			{
				print_rush(x, 'B', ' ', 'B');
			}
			count_y++;
		}
	}
}

int	main(void)
{
	rush(10, 7);
	return (0);
}
