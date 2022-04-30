/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:41:54 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:43:33 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("lib code: %zu\n",strlen("Hello"));
// 	printf("my code: %zu\n",ft_strlen("Hello"));
// }