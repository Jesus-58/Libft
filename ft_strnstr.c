/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:19:18 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/12 18:46:43 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle == NULL)
		return ((char *)haystack);
	while (len-- && ft_strlen(needle) >= len)
	{
		if (*needle == *haystack)
			return ((char *)needle);
		haystack++;
		needle++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include "libft.h"

int main() {
    char haystack[] = "Hello, world!";
    char needle1[] = "world";
    char needle2[] = "planet";
    char needle3[] = "";

    char *result1 = ft_strnstr(haystack, needle1, sizeof(haystack));
    char *result2 = ft_strnstr(haystack, needle2, sizeof(haystack));
    char *result3 = ft_strnstr(haystack, needle3, sizeof(haystack));

    printf("Resultado 1: %s\n", result1 ? result1 : "NULL");
    printf("Resultado 2: %s\n", result2 ? result2 : "NULL");
    printf("Resultado 3: %s\n", result3 ? result3 : "NULL");

    return 0;
}*/
