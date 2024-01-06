/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:17:29 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 22:17:30 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	if (!s || n <= 0)
		return (NULL);
	while (n--)
	{
		if (c == *(char *)s)
			return (s);
		s = *(char *)s + 1;
	}
	return(NULL);
}

#include <stdio.h>

int main() {
    char buffer[] = "Hello, World!";
    char *result = ft_memchr(buffer, 0, sizeof(buffer));

    if (result != NULL) {
        printf("Encontró el byte 0 en la posición %ld\n", result - buffer);
    } else {
        printf("No se encontró el byte 0 en el buffer.\n");
    }

    return 0;
}
