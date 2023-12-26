/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:53:13 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 13:53:45 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char *ultim;

	ultim = 0;
	if (*s == '\0')
		return (0);
	else
	{
		while (*s != '\0')
		{
			if (*s == c)
				ultim = s;
			s++;
		}
	}
	return (ultim);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
   char s[11] = "Hola amigos";
   char c = 'a';

   printf("s = %s\n", s);
   printf("c = %c\n", c);
   printf("strrchr = %s\n", strrchr( s, c));
   printf("\n");
   printf("s = %s\n", s);
   printf("c = %c\n", c);
   printf("strrchr = %s\n", ft_strrchr( s, c));

   return (0);
}*/