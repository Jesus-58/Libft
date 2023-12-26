/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:08:24 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 12:08:47 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int	a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>

int main()
{
    char c;

    c = '5';
    printf("Resultado cuando es un numero: %d\n", isdigit(c));
	printf("Mi resultado cuando es un numero: %d", ft_isdigit(c));

    c = '+';
    printf("\nResultado cuando no es un numero: %d\n", isdigit(c));
	printf("Mi resulttado cuando no es un numero: %d", ft_isdigit(c));

    return (0);
}*/