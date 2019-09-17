/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:10:09 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 09:14:11 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void			free_stack(t_stack **stack)
{
	t_stack		*current;
	t_stack		*p;

	current = (*stack);
	while (current != NULL)
	{
		p = current->next;
		free(current);
		current = p;
	}
	(*stack) = NULL;
}
