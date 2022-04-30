/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:40:16 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:29:20 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (TRUE);
	else
		return (FALSE);
}
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n",isalnum('\0'));
// 	printf("%d\n",isalnum('0'));
// 	printf("%d\n",isalnum('a'));
// 	printf("%d\n",isalnum('Z'));
// 	printf("my code\n");
// 	printf("%d\n",isalnum('\0'));
// 	printf("%d\n",ft_isalnum('0'));
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",ft_isalnum('Z'));
// }