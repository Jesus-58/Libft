/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:31:15 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 23:30:40 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * len);
	if (result = NULL)
		return (NULL);
	while (len > 0)
	{
		len--;
	}

	return (result);
}