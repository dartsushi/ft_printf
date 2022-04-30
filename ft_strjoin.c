/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:02:57 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/27 20:55:16 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s12len[2];
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	s12len[0] = ft_strlen(s1);
	s12len[1] = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * (s12len[0] + s12len[1] + 1));
	if (str == NULL)
		return (NULL);
	while (i < s12len[0])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s12len[1])
	{
		str[i + s12len[0]] = s2[i];
		i++;
	}
	str[s12len[0] + s12len[1]] = '\0';
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char buf1[] = "Hello";
//     char buf2[] = "Tokyo";
//     printf("%s\n",ft_strjoin(buf1, buf2));
//     return (0);
// }