/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:19:18 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 22:19:40 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	if (s2 == '\0')
		return (s1);
	while (n-- && ft_strlen(s2) >= n)
	{
		if (*s2 == *s1)
			return (s2);
		s1++;
		s2++;
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
