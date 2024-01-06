/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:16:46 by jesumore          #+#    #+#             */
/*   Updated: 2024/01/06 22:20:47 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*frase1;
	unsigned char	*frase2;

	frase1 = (unsigned char *)s1;
	frase2 = (unsigned char *)s2;
	while (n--)
	{
		if (*frase1 != *frase2)
			return ((int)(*frase1 - *frase2));
		frase1++;
		frase2++;
	}
	return (0);
}
