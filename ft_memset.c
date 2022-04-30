/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:04:17 by aueda             #+#    #+#             */
/*   Updated: 2022/04/27 20:52:23 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	size_t			i;

	bb = (unsigned char *) b;
	i = 0;
	while (i < len)
		bb[i++] = (unsigned char) c;
	return (b);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char buf[] = "ABCDEFGHIJK";
//     memset(buf+2,'1',3);
//     printf("buf文字列→%s\n",buf);
// 	char buf2[] = "ABCDEFGHIJK";
//     ft_memset(buf2+2,'1',3);
//     printf("buf文字列→%s\n",buf2);
//     return (0);
// }
