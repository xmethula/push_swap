/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:09:11 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:42:08 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int				duplicates(t_stack *stack)
{
	t_stack		*p;
	t_stack		*q;

	p = stack;
	while (p != NULL)
	{
		q = p->next;
		while (q != NULL)
		{
			if (p->num == q->num)
				return (1);
			q = q->next;
		}
		p = p->next;
	}
	return (0);
}
