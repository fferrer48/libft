/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:14:46 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:21 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copie src in dst with a new size of dst (dstsize)
 *
 * @param {dst} Destination array to copy at
 * @param {src} Source array to copy from
 * @param {dstsize} new size of dst, last spot is for \0
 *
 * @return {i} size of src
 *
 * zsh: Illegal hardware instruction
 *      Negative number
 *      n longer than array's length
*/
size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}
