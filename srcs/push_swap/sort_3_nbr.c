/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:55:47 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 15:09:35 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void	sort_3_nbr(t_stack *stack)
{
	if ((stack->num > stack->next->num) &&
		(stack->num < stack->next->next->num))
		do_sa(stack);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num < stack->next->next->num))
		do_ra(stack);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack);
		do_rra(stack);
	}
	else if ((stack->num < stack->next->num) &&
			(stack->num > stack->next->next->num))
		do_rra(stack);
	else if ((stack->num < stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack);
		do_ra(stack);
	}
}
