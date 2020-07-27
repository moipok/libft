/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 21:11:56 by fbarbera          #+#    #+#             */
/*   Updated: 2020/05/15 02:08:14 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_atoibig(const char *nptr)
{
	int		len;

	len = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		len++;
		nptr++;
		if (len > 19)
			return (1);
	}
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int		a;
	int		minus;

	a = 0;
	while (*nptr && (*nptr == '\n' || *nptr == '\t' || *nptr == ' ' ||
			*nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		nptr++;
	minus = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			minus = -1;
		nptr++;
	}
	if (ft_atoibig(nptr))
		return (-1);
	while (*nptr >= '0' && *nptr <= '9')
	{
		a = a * 10 + *nptr - '0';
		nptr++;
	}
	return (a * minus);
}
