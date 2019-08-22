/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:21:58 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/22 08:23:07 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void	do_ss(t_stack *stack_a, t_stack *stack_b, int flag)
{
    do_sa(stack_a, 0);
    do_sb(stack_b, 0);
    if (flag)
        ft_putendl("ss");
}