/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:09:23 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:46:10 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void	do_sa(t_stack *stack)
{
	long int	tmp;

	if ((stack->next != NULL) && (stack->num != stack->next->num))
	{
		tmp = stack->num;
		stack->num = stack->next->num;
		stack->next->num = tmp;
	}
}
