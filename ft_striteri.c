/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:25:10 by aueda             #+#    #+#             */
/*   Updated: 2022/04/27 20:56:01 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void	conv_ind(unsigned int i, char *c)
// {
// 	*c += i;
// }
// int main(void)
// {
// 	char	zeros[] = "000000";
// 	printf("%s\n", zeros);
// 	ft_striteri(zeros, conv_ind);
// 	printf("%s\n", zeros);
// 	return (0);
// }