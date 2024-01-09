/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:38:28 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/09 17:26:33 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	char	*s1_copy;
	char	*set_copy;


	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = strlen(s1);
	s1_copy = strdup(s1);
	set_copy = strdup(set);

	while (s1_copy[start] && strchr(set_copy, s1_copy[start]))
		start++;
	
	while (s1_copy[end - 1] && strchr(set_copy, s1_copy[end - 1]) && (end > start))
		end--;

	if (!(result = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	
	strlcpy(result, &s1_copy[start], (end - start + 1));

	free(s1_copy);
	free(set_copy);
	return (result);
}

#include <stdio.h>
#include "libft.h"

int main()
{
	char *s1 = "   hello world   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	
	printf("Original string: \"%s\"\n", s1);
	printf("Trimmed string: \"%s\"\n", trimmed);
	
	free(trimmed);
	
	return 0;
}
