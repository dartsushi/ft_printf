/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:46:53 by aueda             #+#    #+#             */
/*   Updated: 2022/04/27 20:56:26 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str_conv;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str_conv = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str_conv == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str_conv[i] = f(i, s[i]);
		i++;
	}
	str_conv[i] = '\0';
	return (str_conv);
}
// #include <stdio.h>
// char	conv_ind(unsigned int i, char c)
// {
// 	return (c + i);
// }
// int main(void)
// {
// 	char	zeros[] = "000000";
// 	printf("%s\n", ft_strmapi(zeros, conv_ind));
// 	return (0);
// 	printf("%s\n", ft_strmapi(NULL, conv_ind));
// }