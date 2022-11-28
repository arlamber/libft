/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:46:00 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/27 16:03:45 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

// int main(void)
// {
// 	char str1 [] = "zebi";
// 	char str2 [] = "zebo";

// 	printf("%s\n", (char *)ft_memmove(str1, str2, 4));
// 	printf("%s", (char *)memmove(str1, str2, 4));
// }