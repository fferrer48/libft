/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:25:39 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/20 21:25:59 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Transforms a lowercase char into upper
 *
 * @param {c} char to transform
 *
 * @return {c} Char transformed
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
