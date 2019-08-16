/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:49:31 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 20:05:17 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

int	is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	arr[5] = { 2, 2, 1, 4, 5 };

	if (is_sorted(arr, 5))
		ft_putendl("sorted");
	else
		ft_putendl("not sorted");
	return (0);
}
