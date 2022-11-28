/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:51:38 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/27 16:14:32 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*s;
	size_t				i;

	a = s1;
	s = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (a[i] == s[i] && n - 1 > 0)
	{
		a++;
		s++;
		n--;
	}
	return (a[i] - s[i]);
}
