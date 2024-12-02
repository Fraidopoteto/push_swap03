/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:01:52 by joschmun          #+#    #+#             */
/*   Updated: 2024/10/31 22:36:14 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_indices_simplify 
{
   	int	value;
	int	position;
	int	checker; 
} t_indices_simplify;

//utils.c
int     *ft_simplify(int *arg_value, int arg_count);
int     *ft_convert(char **argv, int arg_count);
int     ft_numlen(int *num);
int	    *ft_intdup(int *stack);
void	ft_push_back(int *stack_1, int *stack_2, int arg_count, char a_or_b, int *op_count);
void    ft_push_down(int *stack, int *temp, int len);
void    ft_push_up(int *stack, int *temp, int len);
int     ft_sort_check(int* stack);

//operation.c
void    ft_swap(int *stack, char a_or_b, int *op_count);
void    ft_reverse_rotate(int *stack, char a_or_b, int *op_count);
void    ft_rotate(int *stack, char a_or_b, int *op_count);
void    ft_push_1_to_2(int *stack_1, int *stack_2, char a_or_b, int *op_count);

//push_swap.c
void	ft_sort_three(int *stack, int *op_count);
void	ft_sort_four(int *stack_a, int *stack_b, int *op_count);
void	ft_sort_five(int *stack_a, int *stack_b, int *op_count);
void    ft_jonas_sort(int *stack_a, int *stack_b, int arg_count, int *op_count);
void	ft_radix_sort(int *stack_a, int *stack_b, int arg_count, int *op_count);

#endif
