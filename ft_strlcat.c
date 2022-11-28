/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:16:30 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/21 10:38:06 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;
	size_t	d;

	d = ft_strlen(dst);
	i = 0;
	destlen = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size < destlen)
		return (size + ft_strlen(src));
	if (size > destlen)
	{
		while (src[i] && size - destlen > 1)
		{
			dst[destlen] = src[i];
			i++;
			destlen++;
		}
	}
	dst[destlen] = '\0';
	while (src[i])
		i++;
	return (d + i);
}
