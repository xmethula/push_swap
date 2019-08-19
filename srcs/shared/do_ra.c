/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:34:49 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:45:10 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_ra(t_stack *stack)
{
	t_stack		*p;
	long int	tmp;

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
}
