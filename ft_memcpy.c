/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:09:06 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/12 20:32:09 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*char_dst;
	const char	*char_src;

	char_dst = (char *)dst;
	char_src = (const char *)src;
	if (dst && src)
	{
		if (char_dst > char_src && char_dst < char_src + n)
			return (NULL);
		while (n--)
		{
			*char_dst = *char_src;
			char_src++;
			char_dst++;
		}
		return (dst);
	}
	return (NULL);
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