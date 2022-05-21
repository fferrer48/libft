/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:51:03 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 17:45:33 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*str;
	size_t			length;

	length = count * size;
	str = (void *)malloc (length);
	if (!str)
		return (NULL);
	ft_bzero(str, length);
	return (str);
}

/* allocate the  necesary memory and put zeros in the not used bytes*/