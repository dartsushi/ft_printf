/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:31:12 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:44:23 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	coincide_condition(char *str, char *to_find, size_t i[3])
{
	if (str[i[0] + i[1]] == to_find[i[1]] && str[i[0] + i[1]] != '\0' \
		&& to_find[i[1]] != '\0' && i[0] + i[1] < i[2])
		return (TRUE);
	return (FALSE);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	i[3];

	if (haystack == NULL)
		return (NULL);
	str = (char *) haystack;
	to_find = (char *) needle;
	i[0] = 0;
	if (ft_strlen(to_find) > ft_strlen(str))
		return (NULL);
	if (ft_strlen(to_find) == 0)
		return (str);
	i[2] = len;
	while (str[i[0]] != '\0' && len--)
	{
		i[1] = 0;
		while (coincide_condition(str, to_find, i))
			i[1]++;
		if (i[1] == ft_strlen(needle))
			return (str + i[0]);
		i[0]++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	// const char *largestring = "Foo Bar Baz";
//     // const char *smallstring = "Bar";
// 	// const char *largestring = "MZIRIBMZIRIBMZE123";
//     // const char *smallstring = "MZIRIBMZE";
// 	char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
//     char *ptr;
// 	// size_t len = ft_strlen(smallstring);
// 	// ptr = strnstr(largestring, smallstring,len);
// 	ptr = strnstr(haystack, "c", -1);
// 	printf("%s\n",ptr);
// 	// ptr = ft_strnstr(largestring, smallstring,len);
// 	ptr = ft_strnstr(haystack, "c", -1);
// 	printf("%s\n",ptr);
// 	return (0);
// }