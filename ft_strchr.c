/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:26:37 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 08:33:19 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char *) s;
	if ((char) c == '\0')
		return (ss + ft_strlen(s));
	else
	{
		while (*ss != '\0')
		{
			if (*ss == (char) c)
				return (ss);
			ss++;
		}
		return (NULL);
	}
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	// const char s[] = "ABCDEFG";
// 	// int c = 'C';
// 	const char *s = "\0";
// 	int c = -256;
// 	//printf("Difference: %d\n",(int) (strchr(s,c)-ft_strchr(s,c)));
// 	printf("%d\n", (char)-256);
// 	printf("%s\n",strchr(s,c));
// 	printf("%s\n",ft_strchr(s,c));
// }