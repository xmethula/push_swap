/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:53:01 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:48:59 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void			do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack		*tmp_b;
	t_stack		*tmp_a;

	tmp_b = (*stack_b);
	if (stack_len(*stack_b) == 0)
		return ;
	(*stack_b) = tmp_b->next;
	tmp_b->next = NULL;
	if (*stack_a == NULL)
		*stack_a = tmp_b;
	else
	{
		tmp_a = (*stack_a);
		tmp_b->next = tmp_a;
		(*stack_a) = tmp_b;
	}
	if (flag)
		ft_putendl("pa");
}

void			do_pb(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack		*tmp_a;
	t_stack		*tmp_b;

	tmp_a = (*stack_a);
	if (stack_len(*stack_a) == 0)
		return ;
	(*stack_a) = tmp_a->next;
	tmp_a->next = NULL;
	if (*stack_b == NULL)
		*stack_b = tmp_a;
	else
	{
		tmp_b = (*stack_b);
		tmp_a->next = tmp_b;
		(*stack_b) = tmp_a;
	}
	if (flag)
		ft_putendl("pb");
}
