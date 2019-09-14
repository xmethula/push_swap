/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:15:16 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 22:22:44 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void			do_rra(t_stack **stack, int flag)
{
	t_stack		*tmp;
	t_stack		*p;

	tmp = (*stack);
	p = (*stack);
	if (stack_len(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (p->next->next != NULL)
			p = p->next;
		p->next->next = tmp;
		(*stack) = p->next;
		p->next = NULL;
	}
	if (flag)
		ft_putendl("rra");
}

void			do_rrb(t_stack **stack, int flag)
{
	t_stack		*tmp;
	t_stack		*p;

	tmp = (*stack);
	p = (*stack);
	if (stack_len(*stack) == 0)
		return ;
	if ((*stack)->next != NULL)
	{
		while (p->next->next != NULL)
			p = p->next;
		p->next->next = tmp;
		(*stack) = p->next;
		p->next = NULL;
	}
	if (flag)
		ft_putendl("rrb");
}

void			do_rrr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	do_rra(stack_a, 0);
	do_rrb(stack_b, 0);
	if (flag)
		ft_putendl("rrr");
}
