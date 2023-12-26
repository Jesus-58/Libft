/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:02:37 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 18:16:00 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *result;

	result = (char *)malloc(ft_strlen(s1) + 1);
	if (result == NULL)
		return NULL;
	ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
	result[ft_strlen(s1)] = '\0';
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char *s = "Hello, world!";
	char *duplicate = ft_strdup(s);
	
	if (duplicate == NULL) {
		printf("Error: Memory allocation failed.\n");
		return 1;
	}
	
	printf("Original string: %s\n", s);
	printf("Duplicate string: %s\n", duplicate);
	
	free(duplicate);
	
	return 0;
}
