/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:19:11 by aueda             #+#    #+#             */
/*   Updated: 2022/04/24 16:16:38 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	if (dst == NULL)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	if (dstsize - dstlen - 1 >= 0)
	{
		while (i < dstsize - dstlen - 1 && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
// #include <stdio.h>
// #include <string.h>
// int    main(void)
// {
// 	char	dst[30];
// 	memset(dst, 'C', 5);
// 	char	*src = (char *)"AAAAAAAAA";
// 	//printf("%zu\n",strlcat(dst, src, (size_t)-1));
// 	printf("%zu\n",(size_t)-1);
// 	printf("%zu\n",ft_strlcat(dst, src, 3));
// 	// printf("%d\n", strlcat(NULL, src, 0));
//     return (0);
// }