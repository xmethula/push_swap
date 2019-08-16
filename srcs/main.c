/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:49:31 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 16:09:06 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

int		duplicate(int *arr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	int		arr[5] = { 4, 3, 5, 3, 1 };

	if (duplicate(arr, 5))
		ft_putendl("The is duplicates in this array");
	else
		ft_putendl("The is no duplicates");
	return (0);
}
