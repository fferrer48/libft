/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:17:29 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:27 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compare two strings, stoping at n char.
 *
 * @param {s1}	First string
 * @param {s2}	Second string
 * @param {n}	Number of char to compare
 *
 * @return {value} positive if s1 is greater than s2,
 * 				  negative if lower and 0 if equal.
 */

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	size_t			i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while ((aux_s1[i] || aux_s2[i]) && i < n)
	{
		if (aux_s1[i] != aux_s2[i])
			return (aux_s1[i] - aux_s2[i]);
		i++;
	}
	return (0);
}
