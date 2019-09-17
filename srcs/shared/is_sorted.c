/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 20:05:44 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:42:27 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int				is_sorted(t_stack *stack)
{
	t_stack		*p;

	p = stack;
	while (p->next != NULL)
	{
		if (p->num > p->next->num)
			return (0);
		p = p->next;
	}
	return (1);
}
