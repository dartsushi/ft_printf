/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:23:26 by aueda             #+#    #+#             */
/*   Updated: 2022/04/18 13:25:25 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_cast;
	char	*src_cast;

	dst_cast = (char *)dst;
	src_cast = (char *)src;
	while (*src_cast != '\0')
	{
		*dst_cast++ = *src_cast++;
	}
	*dst_cast = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	tmp = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (tmp == NULL)
		return (NULL);
	return (ft_strcpy(tmp, s1));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char src[] = "hello";
//     printf("My code %s\n", ft_strdup(src));
//     printf("Original %s\n", strdup(src));

//     char src1[] = "";
//     printf("My code %s\n", ft_strdup(src1));
//     printf("Original %s\n", strdup(src1));
// }