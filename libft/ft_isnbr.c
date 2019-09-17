/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:13:21 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:47:25 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isnbr(const char *s)
{
	int			sign;
	long int	res;

	sign = 1;
	res = 0;
	while ((*s >= 9 && *s <= 13) || (*s == 32))
		s++;
	if ((*s == '-') || (*s == '+'))
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!ft_isdigit(*s))
		return (0);
	while ((*s != '\0') && (*s >= '0') && (*s <= '9'))
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	if ((res * sign) >= -2147483648 && (res * sign) <= 2147483647
		&& (ft_isdigit(*s) || (*s == '\0')))
		return (1);
	else
		return (0);
}
