/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:19:26 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 07:47:30 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
    int     tmp;

    if ((*stack_b) != NULL)
    {
        tmp = (*stack_b)->num;
        stack_del_top(stack_b);
        stack_add_top(stack_a, tmp);
    }
    if (flag)
        ft_putendl("pa");
}