/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:04:07 by maskoyam          #+#    #+#             */
/*   Updated: 2023/08/12 18:22:51 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rush関数を呼び出す。引数はintのx,y
// まずはxyどちらか０だった場合ダメなのでif文でreturnする
// while文を使い、縦列の数(i)と横列の数(j)を一つづつなんの文字が入るのかを埋めていく
// 例えばi=1,j=1(一番左上)の場合、Aが表示されなければいけない。
// そこの条件をif文で細かく設定している。ただ、Bに関してはelse ifの優先順位がA,Cより低くしてあるので、
// A,Cに当てはまらない一番上or一番下or一番左or一番右を条件に設定されてる
// それ以外はスペース

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

	if (x <= 0 || y <= 0)
	{
		return ;
	}
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
