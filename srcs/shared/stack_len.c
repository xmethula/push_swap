/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:58:14 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/12 10:58:38 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

int			stack_len(t_stack *stack)
{
	int		len;

	len = 0;
	while (stack != NULL)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}
