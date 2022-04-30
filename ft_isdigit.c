/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:35:07 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:29:35 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	else
		return (FALSE);
}
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n",isdigit(0));
// 	printf("%d\n",isdigit('0'));
// 	printf("%d\n",isdigit('a'));
// 	printf("%d\n",isdigit('9'));
// 	printf("my code\n");
// 	printf("%d\n",ft_isdigit(0));
// 	printf("%d\n",ft_isdigit('0'));
// 	printf("%d\n",ft_isdigit('a'));
// 	printf("%d\n",ft_isdigit('9'));
// }
