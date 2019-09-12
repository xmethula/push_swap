/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:01:23 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/12 10:57:11 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void			do_ra(t_stack *stack, int flag)
{
	t_stack		*p;
	int			tmp;

	p = stack;
	tmp = stack->num;
	if (stack->next != NULL)
	{
		while (p->next != NULL)
		{
			p->num = p->next->num;
			p = p->next;
		}
		p->num = tmp;
	}
	if (flag)
		ft_putendl("ra");
}

void			do_rb(t_stack *stack, int flag)
{
	t_stack		*p;
	int			tmp;

	p = stack;
	tmp = stack->num;
	if (stack->next != NULL)
	{
		while (p->next != NULL)
		{
			p->num = p->next->num;
			p = p->next;
		}
		p->num = tmp;
	}
	if (flag)
		ft_putendl("rb");
}

void			do_rr(t_stack *stack_a, t_stack *stack_b, int flag)
{
	do_ra(stack_a, 0);
	do_rb(stack_b, 0);
	if (flag)
		ft_putendl("rr");
}
