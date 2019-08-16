/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:59:58 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 14:30:30 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct			s_stack
{
	long int			num;
	struct s_stack		*prev;
	struct s_stack		*next;
}						t_stack;

void	do_sa(t_stack *stack);
void	do_ra(t_stack *stack);
void	do_rra(t_stack *stack);
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	stack_del_top(t_stack **stack);
void	stack_add_top(t_stack **stack, long int num);

size_t	stack_len(t_stack *stack);

#endif
