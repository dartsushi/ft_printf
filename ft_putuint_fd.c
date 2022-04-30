/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:22:52 by aueda             #+#    #+#             */
/*   Updated: 2022/04/30 09:00:50 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putuint_fd(unsigned int n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd('0' + n % 10, fd);
	}
	else
	{
		ft_putuint_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
}
// #include <stdio.h>
// int main(void)
// {
// 	ft_putuint_fd(UINT_MAX, 1);
// 	ft_putchar_fd('\n', 1);
// 	printf("%u\n", UINT_MAX);
// 	return (0);
// }