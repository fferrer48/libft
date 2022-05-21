/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:59:05 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:46:18 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compare two strings that are both n bytes long
 *
 * @param {s1}	First string to compare
 * @param {s2}	Second string to compare
 * @param {n}	Length of both strings
 *
 * @return {int} Positive if s1 > s2, negative if s1 < s2
 * 				 0 if equal.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (aux_s1[index] != aux_s2[index])
			return (aux_s1[index] - aux_s2[index]);
		index++;
	}
	return (0);
}
