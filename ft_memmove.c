/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:02:19 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:52:02 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * As memcpy, copie len bytes from src to dst but treating overlap.
 *
 * @param {dst} String to copy at
 * @param {src} String to copy from
 * @param {len} length of string to copy
 *
 * @return {void *} Copied string in void *
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		aux_dst[len] = aux_src[len];
	return ((void *)aux_dst);
}
