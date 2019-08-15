/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:57:55 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/15 13:57:59 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void    stack_del_top(t_stack **stack)
{
    t_stack     *tmp;

    tmp = (*stack);
    (*stack) = tmp->next;
    (*stack)->prev = NULL;
    tmp->next = NULL;
    free(tmp);
}