/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:20:59 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:33 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Find the last coincidence of give char in string and returns its address
 *
 * @param {s} String to search at
 * @param {c} Char to find in s
 *
 * @return {s2} String s from last c coincidence address
 */
char	*ft_strrchr(const char *s, int c)
{
	char			*s2;
	unsigned int	length;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	length = ft_strlen(s2);
	while (length)
	{
		if (s2[length] == ch)
			return (&s2[length]);
		length--;
	}
	if (s2[length] == ch)
		return (&s2[length]);
	return (0);
}
