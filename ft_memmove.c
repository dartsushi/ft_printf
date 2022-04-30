/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:04:39 by aueda             #+#    #+#             */
/*   Updated: 2022/04/27 16:05:29 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	if (dst == NULL && src == NULL)
		return (dst);
	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	if (dst_cast < src_cast)
		return (ft_memcpy(dst, src, len));
	else
	{
		dst_cast += len - 1;
		src_cast += len - 1;
		while (len--)
			*dst_cast-- = *src_cast--;
	}
	return (dst);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char buf[] = "ABCDEFGHI";
// 	char buf1[] = "ABCDEFGHI";
// 	char buf2[] = "ABCDEFGHI";
// 	memmove(buf+2,buf,3);
// 	printf("Original result: memmove-> %s\n", buf);
// 	memcpy(buf1+2,buf1,3);
// 	printf("Original result: memcpy-> %s\n", buf1);
// 	ft_memmove(buf2+2,buf2,3);
// 	printf("My result-> %s\n", buf2);
// 	return (0);
// }