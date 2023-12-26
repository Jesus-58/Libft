/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:06 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 12:10:32 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		src = (char *)src + 1;
		dest = (char *)dest + 1;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "Hola, mundo!";
    char dst[20];

    size_t len = strlen(src);

    ft_memcpy(dst, src, len);

    dst[len] = '\0';

    printf("src: %s\n", src);
    printf("dst: %s\n", dst);

    return (0);
}*/