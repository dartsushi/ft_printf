/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:40:24 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/30 09:41:55 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

int	count_percent(const char *format)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i] != '%')
			count++;
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	char	*str;
	va_list	va_ptr;

	str = (char *) format;
	va_start(va_ptr, format);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
			{
				ft_putchar_fd((char) va_arg(va_ptr, int), 1);
				str++;
			}
			else if (*str == 's')
			{
				ft_putstr_fd((char *) va_arg(va_ptr, (int *)), 1);
				str++;
			}
			else if (*str == 'p')
			{
				ft_putptr_fd((uintptr_t) va_arg(va_ptr, (int *)), 1);
				str++;
			}
			else if (*str == 'd' || *str == 'i')
			{
				ft_putnbr_fd(va_arg(va_ptr, int), 1);
				str++;
			}
			else if (*str == 'u')
			{
				ft_putuint_fd(va_arg(va_ptr, unsigned int), 1);
				str++;
			}
			else if (*str == 'x' || *str == 'X')
			{
				ft_puthex_fd(va_arg(va_ptr, unsigned int), 1, *str);
				str++;
			}
			else if (*str == '%')
			{
				ft_putchar_fd('%', 1);
				str++;
			}
		}
		else
		{
			ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(va_ptr);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "aaaaaaaaaa";
//   	// ft_printf("aaa%caa%cca\n", 'b','d');
//   	// ft_printf("Hello my friend, %s\n", "John");
// 	// printf("%p\n", str);
// 	// ft_printf("%p\n",str);
// 	// ft_printf("%d\n", 42);
// 	// ft_printf("%u\n", UINT_MAX);
// 	// ft_printf("%x\n", UINT_MAX);
// 	// ft_printf("%X\n", UINT_MAX);
// 	// printf("%x\n", UINT_MAX);
// 	// printf("%X\n", UINT_MAX);
//   	return (0);
// }