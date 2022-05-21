/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:09:34 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/20 21:09:52 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Finds the first coincidence of given char in string and returns its address
 *
 * @param {s} String to search at
 * @param {c} Char to find in s
 *
 * @return {s2} String s from first c coincidence address, NULL if not found
 */
char	*ft_strchr(const char *s, int c)
{
	char			*s2;
	unsigned int	index;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	index = 0;
	while (s2[index])
	{
		if (s2[index] == ch)
			return (&s2[index]);
		index++;
	}
	if (s2[index] == ch)
		return (&s2[index]);
	return (NULL);
}
