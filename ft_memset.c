/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:18:34 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 12:18:57 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		*(char *)s = c;
		s = (char *)s + 1;
		n--;
	}
	return s;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
	char str[20] = "Hello, world!";
	printf("Antes de memset: %s\n", str);

	// Llamada a la función memset
	ft_memset(str, '*', 3);

	printf("Después de memset: %s\n", str);

	return 0;
}*/