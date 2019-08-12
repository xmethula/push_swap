/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:31:40 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/31 10:21:52 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dptr;
	char	*sptr;

	i = 0;
	dptr = (char *)dst;
	sptr = (char *)src;
	if ((n == 0) || (dptr == sptr))
		return (dst);
	while ((i < n))
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dst);
}
