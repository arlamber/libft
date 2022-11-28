/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:07:46 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/27 16:06:56 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)(big));
	while (big[i] != '\0' && len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0' && len >= j)
		{
			return ((char *)(&big[i]));
		}
		i++;
		len--;
	}
	return (NULL);
}

// int main (void)
// {
// 	char *c = "yamarach la tasspe";
// 	char *d = " ";
// 	printf ("%s", ft_strnstr(c, d, 20));
// }