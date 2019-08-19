/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:22:13 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:43:47 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void	display_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_putnbr_endl(stack->num);
		stack = stack->next;
	}
}
