/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:04:06 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/09 13:31:21 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int	len;
	char	*copy_s1;
	char	*copy_s2;

	if (s1 && s2)
	{
		len = strlen(s1) + strlen(s2);
		
		if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
			return(NULL);
		copy_s1 = strdup(s1);
		copy_s2 = strdup(s2);
		strlcpy(result, copy_s1, len + 1);
		strlcat(result, copy_s2, len + 1);
		free(copy_s1);
		free(copy_s2);
		return (result);
	}
	return (NULL);
}
#include <stdio.h>

int main()
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result = ft_strjoin(s1, s2);
	
	if (result != NULL)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: Failed to allocate memory.\n");
	}
	
	return 0;
}