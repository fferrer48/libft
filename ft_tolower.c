/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:24:36 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/27 16:12:20 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Transform uppecase char into lower
 *
 * @param {c} char to transform
 *
 * @return {c} Char transformed
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
