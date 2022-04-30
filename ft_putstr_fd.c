/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:40:38 by aueda             #+#    #+#             */
/*   Updated: 2022/04/30 09:00:53 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
		i++;
	write(fd, s, i);
}
// int main(void)
// {
// 	ft_putstr_fd("Hello\n", 1);
// 	return (0);
// }