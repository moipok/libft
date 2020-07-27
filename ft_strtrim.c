/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 03:42:09 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/21 06:05:06 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL)
		return (NULL);
	j = ft_strlen(s1);
	if (!(str = malloc(sizeof(char ) * j + 1)))
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j && ft_strchr(set, s1[j]))
		j--;
	k = 0;
	while (i < j + 1)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	return (str);
}
