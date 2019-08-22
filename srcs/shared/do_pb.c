/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:27:29 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/22 07:55:23 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_pb(t_stack **stack_a, t_stack **stack_b, int flag)
{
    long int    tmp;

    if ((*stack_a) != NULL)
    {
        tmp = (*stack_a)->num;
        stack_del_top(stack_a);
        stack_add_top(stack_b, tmp);
    }
    if (flag)
        ft_putendl("pb");
}