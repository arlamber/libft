/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlamber <arlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:04:26 by arlamber          #+#    #+#             */
/*   Updated: 2022/11/25 12:11:44 by arlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, (int)s1[j]))
		j--;
	dest = ft_substr(s1, i, j - i + 1);
	return (dest);
}

// int    main(void)
// {
//     char s1[] = "   xxxtripouille  xxx";
//     char set[] = " x";
//     printf("nouvelle chaine de caracteres est : %s\n", ft_strtrim(s1, set));
// }