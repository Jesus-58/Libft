/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:04:06 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 21:34:23 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (s1 && s2)
	{
		if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
			return(NULL);
		result = strlcat(s1, s2, ft_strlen(s2));
		return (result);
	}
	return (NULL);
}