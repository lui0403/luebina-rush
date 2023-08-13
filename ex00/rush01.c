/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:24:18 by rhashizu          #+#    #+#             */
/*   Updated: 2023/08/13 19:47:37 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rush(int x, char head, char middle, char end);
void	rush(int x, int y);
void	ft_putchar(char c);

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

	count_y = 1;
	while (count_y <= y)
	{
		if (count_y == 1)
		{
			print_rush(x, '/', '*', '\\');
		}
		else if (count_y == y)
		{
			print_rush(x, '\\', '*', '/');
		}
		else
		{
			print_rush(x, '*', ' ', '*');
		}
		count_y++;
	}
}
