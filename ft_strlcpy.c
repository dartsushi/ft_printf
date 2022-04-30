/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:25:39 by aueda             #+#    #+#             */
/*   Updated: 2022/04/22 15:18:45 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*src_cast;

	src_cast = (char *) src;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (--dstsize && *src_cast != '\0')
	{
		*dst++ = *src_cast++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char src[] = "";
// 	printf("Correct behavior\n");
// 	printf("Return:%zu\n",strlcpy(buf,src,3));
// 	printf("buf:%s\n", buf);
// 	char buf1[] = "ABCDEFG";
// 	char src1[] = "";
// 	printf("My code's behavior\n");
// 	printf("Return:%zu\n",ft_strlcpy(buf1,src1,3));
// 	printf("buf:%s\n",buf1);
// }