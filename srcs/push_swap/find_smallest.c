/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:38:52 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/20 17:48:53 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

long int		find_smallest(t_stack *stack)
{
	long int	smallest;
	t_stack		*i;

	smallest = stack->num;
	i = stack->next;
	while (i->next != NULL)
	{
		if (i->num < smallest)
			smallest = i->num;
		i = i->next;
	}
	return (smallest);
}
