/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:57:55 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 14:47:50 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void    stack_del_top(t_stack **stack)
{
    t_stack     *tmp;

    if ((*stack) != NULL)
    {
        if (stack_size(*stack) == 1)
            ft_memdel((void **)stack);
        else
        {
            tmp = (*stack);
            (*stack) = tmp->next;
            (*stack)->prev = NULL;
            tmp->next = NULL;
            free(tmp);
        }
    }
}