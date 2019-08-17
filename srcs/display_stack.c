/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:22:13 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/17 17:24:41 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "includes/push_swap.h"

void	display_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_putnbr_endl(stack->num);
		stack = stack->next;
	}
}
