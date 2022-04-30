/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:11:07 by aueda             #+#    #+#             */
/*   Updated: 2022/04/18 17:00:10 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	n--;
	while (*ss1 == *ss2 && n-- && *ss1 != '\0' && *ss2 != '\0')
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char buf1[] = "abcde";
// 	char buf2[] = "abde";
// 	printf("Correct result and My result\n");
// 	printf("%d\n",strncmp(buf1,buf2,2));
// 	printf("%d\n",ft_strncmp(buf1,buf2,2));
// 	printf("Correct result and My result\n");
// 	printf("%d\n",strncmp(buf1,buf2,3));
// 	printf("%d\n",ft_strncmp(buf1,buf2,3));
// 	return(0);
// }