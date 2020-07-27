/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 01:47:55 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/14 03:10:22 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (dest == NULL || src == NULL)
		return (0);
	i = 0;
	ds = (char *)dest;
	sr = (char *)src;
	while (i < n)
	{
		ds[i] = sr[i];
		if (ds[i] == c)
			return (ds + 1 + i);
		i++;
	}
	return (NULL);
}
