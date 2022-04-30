/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:35:38 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:30:00 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	while (n--)
		*ss++ = 0;
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char buf[] = "ABCDEFGHIJK";
//     bzero(buf+2,3);
//     printf("buf文字列→%s\n",buf);
// 	char buf2[] = "ABCDEFGHIJK";
//     ft_bzero(buf2+2,3);
//     printf("buf文字列→%s\n",buf2);
//     return (0);
// }