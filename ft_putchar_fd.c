/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:04:20 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:47:02 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Write a char in a file
 *
 * @param {c} Char to copy
 * @param {fd} File to copy at
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
