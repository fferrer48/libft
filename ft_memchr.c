/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:58:11 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/20 20:58:26 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

/*
 * Locates the first ocurrence of c in string s
 *
 * @param {s}	String to search at
 * @param {c}	Char to find
 * @param {n}	Number of chars to find in
 *
 * @return {void *} Address at the first ocurrence
 */
void	*ft_memchr(const void	*s, int c, size_t n)
{
	size_t			index;
	unsigned char	*aux_s;
	unsigned char	ch;

	ch = (unsigned char)c;
	aux_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (aux_s[index] == ch)
			return ((void *)aux_s + index);
		index++;
	}
	return (NULL);
}
