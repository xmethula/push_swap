/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:15:16 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/12 10:54:08 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void			do_rra(t_stack *stack, int flag)
{
	t_stack		*p;
	int			tmp;

	p = stack;
	if (stack->next != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		tmp = p->num;
		while (p->prev != NULL)
		{
			p->num = p->prev->num;
			p = p->prev;
		}
		p->num = tmp;
	}
	if (flag)
		ft_putendl("rra");
}

void			do_rrb(t_stack *stack, int flag)
{
	t_stack		*p;
	int			tmp;

	p = stack;
	if (stack->next != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		tmp = p->num;
		while (p->prev != NULL)
		{
			p->num = p->prev->num;
			p = p->prev;
		}
		p->num = tmp;
	}
	if (flag)
		ft_putendl("rrb");
}

void			do_rrr(t_stack *stack_a, t_stack *stack_b, int flag)
{
	do_rra(stack_a, 0);
	do_rrb(stack_b, 0);
	if (flag)
		ft_putendl("rrr");
}
