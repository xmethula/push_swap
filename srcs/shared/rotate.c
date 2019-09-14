/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:01:23 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 21:49:58 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void			do_ra(t_stack **stack, int flag)
{
	t_stack		*tmp;
	t_stack		*p;

	tmp = (*stack);
	p = (*stack);
	if (stack_len(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = tmp;
		(*stack) = tmp->next;
		tmp->next = NULL;
	}
	if (flag)
		ft_putendl("ra");
}

void			do_rb(t_stack **stack, int flag)
{
	t_stack		*tmp;
	t_stack		*p;

	tmp = (*stack);
	p = (*stack);
	if (stack_len(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = tmp;
		(*stack) = tmp->next;
		tmp->next = NULL;
	}
	if (flag)
		ft_putendl("rb");
}

void			do_rr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	do_ra(stack_a, 0);
	do_rb(stack_b, 0);
	if (flag)
		ft_putendl("rr");
}
