/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:13:40 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 01:48:08 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Appends a copy of src at the end of dest until size-lDest-1 terminating on nul
 *
 * @param {dest}	Destination string
 * @param {src}		Source string
 * @param {dstsize}	Size of destination
 *
 * @return {size_t}  Sum size of src + dest.
 * 					 Src + dstsize if dstsize <= length of dest
 */
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length_dest;
	size_t	length_src;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = 0;
	if (dstsize < 1 || dstsize <= length_dest)
		return (length_src + dstsize);
	while (src[i] && (i < (dstsize - length_dest - 1)))
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (length_src + length_dest);
}
