/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:56:49 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 08:34:52 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	*last_appear;

	last_appear = NULL;
	ss = (char *) s;
	if ((char) c == '\0')
		return (ss + ft_strlen(s));
	else
	{
		while (*ss != '\0')
		{
			if (*ss == (char)c)
				last_appear = ss;
			ss++;
		}
		return (last_appear);
	}
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	// const char s[] = "ABCDECFG";
// 	// int c = 'C';
// 	const char s[] = "\0";
// 	int c = -256;
// 	printf("Difference: %d\n",(int) (strrchr(s,c)-ft_strrchr(s,c)));
// 	printf("%s\n",ft_strrchr(s,c));
// }