/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:04:43 by aueda             #+#    #+#             */
/*   Updated: 2022/04/26 11:14:19 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *) buf;
	while (n--)
	{
		if (*buff == (unsigned char) ch)
			return (buff);
		buff++;
	}
	return (NULL);
}
// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
//         char str[] = "abcdef\0ghij";
//         char *p;
// 		size_t n = 12;
//         p = memchr(str, 'h', n);
//         printf("Correct result %s\n",p);
// 		p = ft_memchr(str, 'h', n);
//         printf("My result:%s\n",p);
//         return (0);
// }