/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:21:21 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/28 07:45:18 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_instr(char c, char const *set)
{
	int	flag;
	int	i;

	flag = 0;
	i = 0;
	while (set[i] != '\0')
		if (set[i++] == c)
			flag = 1;
	return (flag);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	pos[2];
	int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (is_instr(s1[i], set) && s1[i] != '\0')
		i++;
	pos[0] = i;
	if ((size_t) i == ft_strlen(s1))
		return (ft_substr(s1, 0, 0));
	i = ft_strlen(s1) - 1;
	while (is_instr(s1[i], set) && 0 <= i)
		i--;
	pos[1] = i;
	return (ft_substr(s1, pos[0], pos[1] - pos[0] + 1));
}
// #include <stdio.h>
// #include <string.h>
// int main(void) 
// {
// 	// //char *s2 = "Hello \t  Please\n Trim me !";
// 	// char *ret = ft_strtrim(s1, " \n\t");
// 	// char *s1 = "  \t \t \n   \n\n\n\t";
// 	//char *s2 = "";
// 	// char *ret = ft_strtrim(s1, " \n\t");
// 	char *ret = ft_strtrim("   xxx   xxx", " x");
// 	printf("%s\n", ret);
// 	printf("%d\n", strcmp(ret, ""));
// 	return (0);
// }