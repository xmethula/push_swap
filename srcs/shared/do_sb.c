/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:14:36 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 07:49:46 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void	do_sb(t_stack *stack, int flag)
{
	int		tmp;

	if ((stack->next != NULL) && (stack->num != stack->next->num))
	{
		tmp = stack->num;
		stack->num = stack->next->num;
		stack->next->num = tmp;
	}
	if (flag)
		ft_putendl("sb");
}