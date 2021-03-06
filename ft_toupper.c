/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:20:07 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:46:09 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c += 'A' - 'a';
	}
	return (c);
}
// #include <stdio.h>
// int main(void)
// {
// 	int p = 'a';
// 	printf("%c\n", (char)ft_toupper(p));
// 	return (0);
// }