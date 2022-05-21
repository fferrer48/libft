/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:01:03 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:46:22 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copie the first n char from src o dst
 *
 * @param {dst} Destination array to copy at
 * @param {src} Source array to copy from
 * @param {n} Number of chars to copy
 *
 * @return {dst} Pointer to dst
 *
 * zsh: Illegal hardware instruction
 * 		Negative number
 * 		n longer than array's length
 */
void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	void	*dst_aux;

	dst_aux = dst;
	if (dst || src)
	{
		while (n--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
		return (dst_aux);
	}
	return (NULL);
}
