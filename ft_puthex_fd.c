/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:16:49 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/30 09:00:36 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_puthex_lower(unsigned int n, int fd)
{
	if (n < 16)
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	else
	{
		ft_puthex_lower(n / 16, fd);
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	}
}

void    ft_puthex_upper(unsigned int n, int fd)
{
	if (n < 16)
		ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	else
	{
		ft_puthex_upper(n / 16, fd);
		ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	}
}

void	ft_puthex_fd(unsigned int n, int fd, char c)
{
	if (c == 'x')
		ft_puthex_lower(n, fd);
	if (c == 'X')
		ft_puthex_upper(n, fd);
}
