/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:22:52 by aueda             #+#    #+#             */
/*   Updated: 2022/04/30 09:02:43 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putnbr_fd(-214748364, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd('0' + n % 10, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
}
// int main(void)
// {
// 	ft_putnbr_fd(-12345, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }