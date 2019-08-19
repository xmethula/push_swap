/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:56:43 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:45:39 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_rra(t_stack *stack)
{
    t_stack     *p;
    long int    tmp;

    p = stack;
    if (stack->next != NULL)
    {
        while (p->next != NULL)
            p = p->next;
        tmp = p->num;
        while (p->prev != NULL)
        {
            p->num = p->prev->num;
            p = p->prev;
        }
        p->num = tmp;
    }
}
