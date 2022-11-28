/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:44:07 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/27 16:14:36 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*i;
	char	*d;

	i = (char *)dest;
	d = (char *)src;
	while (n > 0)
	{
		*i = *d;
		i++;
		d++;
		n--;
	}
	return (dest);
}
// void    *ft_memcpy(void *dest, const void *src, size_t n)
// {
//     size_t    i;

//     i = 0;
//     while (i < n)
//     {
//         ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
//         i++;
//     }
//     return (dest);
// }