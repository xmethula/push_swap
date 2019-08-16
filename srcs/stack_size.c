/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 19:38:32 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 19:38:50 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

size_t      stack_size(t_stack *stack)
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
