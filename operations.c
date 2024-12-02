/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:22:21 by joschmun          #+#    #+#             */
/*   Updated: 2024/11/01 14:41:21 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *stack, char a_or_b, int *op_count)
{
	int	*temp;

	temp = malloc(2 * sizeof(int));
	temp[0] = stack[0];
	temp[1] = stack[1];
	stack[0] = temp[1];
	stack[1] = temp[0];
	free (temp);
	(*op_count)++;
	printf("s%c", a_or_b);
}

void	ft_reverse_rotate(int *stack, char a_or_b, int *op_count)
{
	int	*temp;
	int	len;
	int	i;

	i = 0;
	len = ft_numlen(stack);
	temp = ft_intdup(stack);
	stack[len - 1] = temp[0];
	while (i < len - 1)
	{
		stack[i] = temp[i + 1];
		i++;
	}
	free(temp);
	(*op_count)++;
	printf("rr%c", a_or_b);
}

void ft_rotate(int *stack, char a_or_b, int *op_count)
{
	int	*temp;
	int	len;
	int	i;

	i = 0;
	len = ft_numlen(stack);
	temp = ft_intdup(stack);
	stack[0] = temp[len - 1];
	while (i < len - 1)
	{
		stack[i + 1] = temp[i];
		i++;
	}
	free(temp);
	(*op_count)++;
	printf("rr%c", a_or_b);
}

void	ft_push_1_to_2(int *stack_1, int *stack_2, char a_or_b, int *op_count)
{
	int	*temp_1;
	int	*temp_2;
	int	len_1;
	int	len_2;

	if (stack_1[0] == 0)
		return ;
	len_1 = ft_numlen(stack_1);
	len_2 = ft_numlen(stack_2);
	temp_1 = ft_intdup(stack_1);
	temp_2 = ft_intdup(stack_2);
	stack_2[0] = temp_1[0];
	ft_push_up(stack_2, temp_2, len_2);
	ft_push_down(stack_1, temp_1, len_1);
	free(temp_1);
	free(temp_2);
	(*op_count)++;
	printf("p%c", a_or_b);
}
