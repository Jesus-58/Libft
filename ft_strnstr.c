/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:19:18 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/29 19:44:59 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
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
