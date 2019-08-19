/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:58:14 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:58:23 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

size_t      stack_len(t_stack *stack)
{
    size_t      len;

    len = 0;
    while (stack != NULL)
    {
        len++;
        stack = stack->next;
    }
    return (len);
}
