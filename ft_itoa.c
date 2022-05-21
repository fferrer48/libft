/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:36:36 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:51:43 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Turn an int into an array
 *
 * @param {n} Number to transform
 *
 * @return {itoa} Array from given int
 */
#include "libft.h"

size_t	ft_numsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_min_value(char	*itoa)
{
	ft_strlcpy(itoa, "-2147483648", 12);
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	numsize;
	int		aux_n;

	aux_n = n;
	numsize = ft_numsize(n);
	itoa = (char *)malloc(sizeof(char) * numsize + 1);
	if (!itoa)
		return (NULL);
	if (n == -2147483648)
		return (ft_min_value(itoa));
	itoa[numsize--] = '\0';
	if (n < 0)
	{
		n = -n;
		itoa[0] = '-';
	}
	while (numsize > 0)
	{
		itoa[numsize--] = (n % 10) + '0';
		n = n / 10;
	}
	if (aux_n >= 0)
		itoa[numsize] = n + '0';
	return (itoa);
}
