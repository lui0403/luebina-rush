/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:07:06 by luebina           #+#    #+#             */
/*   Updated: 2023/08/13 20:14:01 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//index使わない方がすっきりする、わかりにくい？
//配列の中身確認して終端までループ
//文字列の数字を数値に変換
//char分アドレスプラス=次の文字
//正負判別　-なら表示してIndex進める? 負の値いれたなら弾いていいのでは？
//xが格納された配列の先頭(+char分)アドレスを渡す
//xが格納された配列の先頭アドレスを渡す
//yが格納された配列の先頭アドレスを渡す

#include <unistd.h>

void	rush(int x, int y);

int convert_to_int(const char *str)
{
    int result;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			return (0);
		}
        result = result * 10 + (*str - '0');
        str++;
	}
	return (result);
}

int	custom_atoi(const char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (*str != '-')
	{
		if (*str == '+')
		{
		str++;
		}
		result = convert_to_int(str);
	}
	return (result);
}

int	main(int argc, char const *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		return (1);
	}
	x = custom_atoi(argv[1]);
	y = custom_atoi(argv[2]);
	rush(x, y);
	return (0);
}
