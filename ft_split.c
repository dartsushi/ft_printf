/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:44:57 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/28 07:42:48 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			num++;
		}
	}
	return (num);
}

void	zero_array(int arr[4])
{
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 0;
}

void	store_words(char const *s, int *i, char c, char **s_list)
{
	while (s[i[2]] == c)
		i[2]++;
	i[3] = i[2];
	while (s[i[2]] != c && s[i[2]] != '\0')
	{
		i[1]++;
		i[2]++;
	}
	s_list[i[0]] = ft_substr(s, i[3], i[1]);
}

void	free_slist(char **s_list, int i)
{
	i ++;
	while (i--)
		free(s_list[i - 1]);
	free(s_list);
}

char	**ft_split(char const *s, char c)
{
	char	**s_list;
	int		i[4];

	if (s == NULL)
		return (NULL);
	zero_array(i);
	s_list = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (s_list == NULL)
		return (NULL);
	while (i[0] < (count_words(s, c)))
	{
		store_words(s, i, c, s_list);
		if (s_list[i[0]] == NULL)
		{
			free_slist(s_list, i[0]);
			return (NULL);
		}
		i[0]++;
		i[1] = 0;
	}
	s_list[i[0]] = NULL;
	return (s_list);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *str ="      split       this for   me  !       ";
//     int i = 0;
// 	char	**result = ft_split(str, ' ');
//     while (result[i] != NULL)
// 	{
//         printf("%d,%s\n",i ,result[i]);
// 		i++;
// 	}
// 	printf("%d,%s\n",i ,result[count_words(str,' ')]);
// 	return (0);
// }