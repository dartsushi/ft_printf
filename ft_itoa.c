/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:45:43 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:29:41 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	int	digit;

	digit = 1;
	if (n == -INT_MIN)
		return (11);
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	while (n / 10 != 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

int	negative_func(int n, char *num)
{
	num[0] = '-';
	return (-n);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		idx;

	idx = count_digit(n);
	num = (char *) malloc(sizeof(char) * (idx + 1));
	if (num == NULL)
		return (NULL);
	num[idx--] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n == INT_MIN)
	{
		num[idx--] = '8';
		n = -214748364;
	}
	if (n < 0)
		n = negative_func(n, num);
	while (idx >= 0 && n != 0)
	{
		num[idx--] = '0' + n % 10;
		n /= 10;
	}
	return (num);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n",ft_itoa(-1234567));
// 	printf("%s\n",ft_itoa(-0));
// 	printf("%s\n",ft_itoa(-2147483648));
// 	return (0);
// }