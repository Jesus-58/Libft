/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:02:49 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 22:22:33 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	resultado;
	int	signo;

	resultado = 0;
	signo = 1;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		signo = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado * 10 + (*str - '0');
		str++;
	}
	resultado *= signo;
	return (resultado);
}
/*#include <stdio.h>
int main() {
    char str[] = "-12345";
    int num = ft_atoi(str);

    printf("El numero convertido es: %d\n", num);

    return 0;
}*/