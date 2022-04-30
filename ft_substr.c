/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:47:05 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/27 20:54:48 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	pos;

	if (s == NULL)
		return (NULL);
	pos = start;
	if (len < ft_strlen(s))
		substr = (char *) malloc(sizeof(char) * (len + 1));
	else
		substr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (substr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	while (pos < len + start && s[pos] != '\0')
	{
		substr[pos - start] = s[pos];
		pos++;
	}
	substr[pos - start] = '\0';
	return (substr);
}
// #include <stdio.h>
// int main(void)
// {
// 	// char str[] = "Hello";
// 	char str[] = "i just want this part #############";
// 	char *ret = ft_substr(str, 5, 20);
// 	printf("%s\n",ret);
// 	printf("%d\n",ret[20]);
// 	printf("%c\n",ret[20]);
// 	return (0);
// }