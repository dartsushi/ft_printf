/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:46:25 by aueda             #+#    #+#             */
/*   Updated: 2022/04/22 14:08:16 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	if (dst == NULL && src == NULL)
		return (dst);
	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	while (n--)
		*dst_cast++ = *src_cast++;
	return (dst);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char buf2[] = "123456789";
// 	// void *buf = NULL;
// 	// void *buf2 = NULL;
// 	memcpy(buf,buf2,3);
// 	printf("Original result-> %s\n", buf);
// 	char buf3[] = "ABCDEFG";
// 	char buf4[] = "123456789";
// 	memcpy(buf3,buf4,3);
// 	printf("My result-> %s\n", buf);
// 	return (0);
// }