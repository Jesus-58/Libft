/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:19:29 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 13:52:48 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*size_t    ft_strlcat(char *dst, char *src, size_t size)
{
    size_t i;

    i = 0;
    while ((size > 0) || (*src != '\0'))
    {
        if (*dst == '\0')
            *dst += *src;
        dst++;
        i++;
        size--;
    }
    *dst += '\0';
    return 
}*/

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Illo, ";
    const char *src = "k paza";

    size_t result = strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total size: %zu\n", result);

    return 0;
}