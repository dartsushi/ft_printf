/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:16:49 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/30 09:00:32 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_putptr_child(uintptr_t ptr, int fd)
{
	if (ptr < 16)
		ft_putchar_fd("0123456789abcdef"[ptr % 16], fd);
	else
	{
		ft_putptr_child(ptr / 16, fd);
		ft_putchar_fd("0123456789abcdef"[ptr % 16], fd);
	}
}

void	ft_putptr_fd(uintptr_t ptr, int fd)
{
	write(fd, "0x", 2);
	ft_putptr_child(ptr, fd);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "Hello\n";
// 	// char *str = NULL;
// 	printf("%p\n", str);
// 	ft_putptr_fd((uintptr_t) str, 1);
// 	write(1,"\n",1);
// 	return (0);
// }