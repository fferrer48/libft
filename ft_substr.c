/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:22:50 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:37 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
 * Allocate a substring from the given string that start and end
 * according to the parameters 'start' and 'len'
 *
 * @param {s} String to substract the substring
 * @param {start} Beginning position of s to substract
 * @param {len} length of the substring
 *
 * @return {substr} Substring from the string s
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (len <= 0 || start >= length)
	{
		substr = (char *)malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	if (len > length)
		len = length - start;
	substr = malloc (sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
