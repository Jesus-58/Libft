/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:12:43 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 13:52:44 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;
	int valor;

	i = 0;
	valor = 0;
	while (((*s1 != '\0' || *s2 != '\0')) && i <= n)
	{
		if (*s1 != *s2)
		{
			valor = (unsigned char)*s1 - (unsigned char)*s2;
			break;
		}
		s1++;
		s2++;
		i++;
	}
	return (valor);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
   char s1[9] = "artista";
   char s2[8] = "arbol";
   int i;
   int j;

   printf( "s1 = %s\t", s1);
   printf( "s2 = %s\n", s2);

   i = strncmp(s1, s2, 3);
   j = ft_strncmp(s1, s2, 3);
   printf("%i\t%i", i, j);
   return (0);
}*/