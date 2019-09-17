/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:59:50 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:43:25 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void		do_sa(t_stack *stack, int flag)
{
	int		tmp;

	if (stack_len(stack) == 0)
		return ;
	if (stack->next != NULL)
	{
		tmp = stack->num;
		stack->num = stack->next->num;
		stack->next->num = tmp;
	}
	if (flag)
		ft_putendl("sa");
}

void		do_sb(t_stack *stack, int flag)
{
	int		tmp;

	if (stack_len(stack) == 0)
		return ;
	if (stack->next != NULL)
	{
		tmp = stack->num;
		stack->num = stack->next->num;
		stack->next->num = tmp;
	}
	if (flag)
		ft_putendl("sb");
}

void		do_ss(t_stack *stack_a, t_stack *stack_b, int flag)
{
	do_sa(stack_a, 0);
	do_sb(stack_b, 0);
	if (flag)
		ft_putendl("ss");
}
