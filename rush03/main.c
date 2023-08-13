/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:07:06 by luebina           #+#    #+#             */
/*   Updated: 2023/08/13 11:48:29 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int custom_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
	{
        sign = -1;
        i++;
    }
	else if (str[0] == '+')
	{
        i++;
    }
    while (str[i] != '\0')
	{
        if (str[i] >= '0' && str[i] <= '9')
		{
            result = result * 10 + (str[i] - '0');
            i++;
        }
		else
		{
            break;
        }
    }

    return result * sign;
}

int	main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		return 1;
	}
	int x = custom_atoi(argv[1]);
    int y = custom_atoi(argv[2]);
	rush(x, y);
	return (0);
}
