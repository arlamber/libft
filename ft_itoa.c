/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:38 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/25 18:57:09 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(long n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_is_neg(char *res, long n, int i)
{
	n = n * (-1);
	res = malloc(sizeof(char) * i + 2);
	if (!res)
		return (0);
	res[0] = '-';
	res[i + 1] = '\0';
	while (i >= 1)
	{
		res[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*res;

	nb = (long)n;
	res = 0;
	i = ft_len_nb(nb);
	if (nb < 0)
	{
		res = ft_is_neg(res, nb, i);
		return (res);
	}
	res = malloc(sizeof(char) * i + 1);
	res[i] = '\0';
	if (!res)
		return (0);
	i--;
	while (i >= 0)
	{
		res[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (res);
}
