/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:04:20 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/20 21:04:42 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes a char in a file
 *
 * @param {c} Char to copy
 * @param {fd} File to copy at
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
