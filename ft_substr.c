/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 04:14:51 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/21 06:05:27 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned	int	min;
	unsigned	int	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		if (!(str = malloc(sizeof(char ) * 1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	min = ft_strlen(s) - start;
	if (min < len)
		len = min;
	if (!(str = malloc(sizeof(char ) * ft_strlen(s) + 1)))
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
