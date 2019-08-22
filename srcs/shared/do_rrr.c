/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:35:42 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/22 08:23:19 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_rrr(t_stack *stack_a, t_stack *stack_b, int flag)
{
    do_rra(stack_a, 0);
    do_rrb(stack_b, 0);
    if (flag)
        ft_putendl("rrr");
}