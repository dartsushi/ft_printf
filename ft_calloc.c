/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:34:18 by aueda             #+#    #+#             */
/*   Updated: 2022/04/27 16:09:27 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > UINTPTR_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// int main(void)
// {
//    int *ptr,*p;
//    int i;
//    /* 500個のintサイズのメモリを確保 */
//    ptr = (int *) ft_calloc(500,sizeof(int));
//    if(ptr == NULL) {
//       printf("メモリが確保できません\n");
//       exit(EXIT_FAILURE);
//    }
//    p = ptr;
//    for (i=0; i<500; i++) {
//       *p = i;
//       printf("%d ",*p);
//       p++;
//    }
//    /* メモリの開放 */
//    free(ptr);
//    return (0);
// }