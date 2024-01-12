/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:17:44 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/11 20:12:01 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	lendst;

	lendst = ft_strlen(dst);
	if (len <= lendst)
	{
		while (len > 0)
		{
			*(char *)dst = *(char *)src;
			src = (char *)src + 1;
			dst = (char *)dst + 1;
			len--;
		}
	}
	while (lendst > 0)
	{
		*(char *)dst = *(char *)src;
		src = (char *)src + 1;
		dst = (char *)dst + 1;
		lendst--;
	}
	*(char *)dst = '\0';
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	char src[] = "Hello, World!";
	char dst[20];

	// Copiar src a dst usando ft_memmove
	ft_memmove(dst, src, strlen(src));
	printf("\n");
	memmove(dst, src, strlen(src));

	// Imprimir el resultado
	printf("dst: %s\n", dst);

	return 0;
}*/