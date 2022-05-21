/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:19:06 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:29 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locate the first ocurrence of a null terminated str1 in str2,
 * no more than n searched
 *
 * @param {haystack} String to search at
 * @param {needle} String to look for
 * @param {n} Number of chars to search, then stop.
 *
 * @return {address} Address of the first ocurrence.
 */
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
