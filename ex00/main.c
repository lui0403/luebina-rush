/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:07:06 by luebina           #+#    #+#             */
/*   Updated: 2023/08/13 15:46:52 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int convert_to_int(const char *str, int *index) {
    int result = 0;

    while (str[*index] != '\0' && str[*index] >= '0' && str[*index] <= '9') {
		printf("indexの値:%d\n",*index);
        result = result * 10 + (str[*index] - '0');
        (*index)++;
    }

    return result;
}

int	custom_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[0] == '+')
	{
		i++;
	}
	result = convert_to_int(str, &i);
	return (result * sign);
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
