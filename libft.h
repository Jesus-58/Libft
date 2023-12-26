/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesumore <jesumore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:08:31 by jesumore          #+#    #+#             */
/*   Updated: 2023/12/26 17:23:20 by jesumore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
int		ft_isalpha(int	c);
int		ft_isdigit(int	a);
int		ft_isalnum(int	a);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
#endif 
