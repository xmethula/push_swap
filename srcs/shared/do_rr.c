/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:25:34 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/22 08:23:31 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_rr(t_stack *stack_a, t_stack *stack_b, int flag)
{
    do_ra(stack_a, 0);
    do_rb(stack_b, 0);
    if (flag)
        ft_putendl("rr");
}