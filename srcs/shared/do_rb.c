/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:16:45 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 07:48:26 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_rb(t_stack *stack, int flag)
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