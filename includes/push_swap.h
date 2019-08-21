/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:59:58 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/21 16:19:44 by xmethula         ###   ########.fr       */
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

void		do_sa(t_stack *stack);
void		do_ss(t_stack *stack_a, t_stack *stack_b);
void		do_ra(t_stack *stack);
void		do_rr(t_stack *stack_a, t_stack *stack_b);
void		do_rra(t_stack *stack);
void		do_rrr(t_stack *stack_a, t_stack *stack_b);
void		do_pa(t_stack **stack_a, t_stack **stack_b);
void		do_pb(t_stack **stack_a, t_stack **stack_b);
void		stack_del_top(t_stack **stack);
void		stack_add_top(t_stack **stack, long int num);
void		fill_stack(int argc, char **argv, t_stack **stack);
void		read_stdout(t_stack **stack_a, t_stack **stack_b);
void		display_stack(t_stack *stack);

size_t		stack_len(t_stack *stack);
int			duplicates(t_stack *stack);
int			is_sorted(t_stack *stack);


void		sort_5_or_less(t_stack **stack_a, t_stack **stack_b);
long int	find_smallest(t_stack *stack);

#endif
