/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:33:24 by aueda             #+#    #+#             */
/*   Updated: 2022/04/13 16:43:48 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
// 	ft_putchar_fd('H', 1);
// 	ft_putchar_fd('e', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('o', 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }