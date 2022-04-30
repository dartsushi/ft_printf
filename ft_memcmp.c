/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:10:18 by aueda             #+#    #+#             */
/*   Updated: 2022/04/14 16:17:36 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	n--;
	while (n-- && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
//         char buf1[] = "\0abc\0de"; 
//         char buf2[] = "\0abc\0de";
//         char buf3[] = "\0abcdef";
// 		printf("Correct result\n");
//         if (memcmp(buf1, buf2, 7) == 0)
//                 printf("buf1 = buf2\n");
//         else
//                 printf("buf1 != buf2\n");

//         if (memcmp(buf1, buf3, 7) == 0)
//                 printf("buf1 = buf3\n");
//         else
//                 printf("buf1 != buf3\n");
// 		printf("My result\n");
// 		if (ft_memcmp(buf1, buf2, 7) == 0)
//                 printf("buf1 = buf2\n");
//         else
//                 printf("buf1 != buf2\n");
//         if (ft_memcmp(buf1, buf3, 7) == 0)
//                 printf("buf1 = buf3\n");
//         else
//                 printf("buf1 != buf3\n");
//         return 0;
//         return (0);
// }