/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 02:00:44 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/21 06:41:42 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_newstr(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	if (!(str = malloc(sizeof(char ) * len + 1)))
		return (0);
	while (s[i] == c)
		i++;
	while (len && s[len - 1] == c)
		len--;
	while (s[i] && i < len)
	{
		str[j] = s[i];
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else
			i++;
		j++;
	}
	return (str);
}

static int	ft_countrow(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[j])
	{
		if (s[j] == c)
			i++;
		j++;
	}
	return (i + 1);
}

static int	ft_setlenword(char const *s, char c, int row)
{
	int i;
	int len;
	int l;

	i = 0;
	len = 0;
	l = 0;
	while (s[i])
	{
		if (l > row - 1)
			return (len);
		else if (s[i] == c)
			l++;
		else if (row - 1 == l)
			len++;
		i++;
	}
	return (len);
}

static void	ft_ilovenorminette(char **str, char *s1, char c)
{
	int	row;
	int	i;
	int	j;

	row = 0;
	i = 0;
	j = 0;
	while (s1[j])
	{
		str[row][i] = s1[j];
		if (s1[j] == c)
		{
			str[row][i] = '\0';
			row++;
			i = -1;
		}
		i++;
		j++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		row;
	char	**str;
	char	*s1;
	int		i;

	s1 = ft_newstr(s, c);
	row = ft_countrow(s1, c);
	if (!(str = malloc(sizeof(char *) * row + 1)))
		return (0);
	if (s1[0] == '\0')
		return (str);
	i = 0;
	while (i < row)
	{
		if (!(str[i] = malloc(sizeof(char ) * ft_setlenword(s1, c, i + 1) + 1)))
			return (0);
		i++;
	}
	ft_ilovenorminette(str, s1, c);
	free(s1);
	return (str);
}
