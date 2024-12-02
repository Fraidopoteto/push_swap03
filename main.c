/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:34:27 by joschmun          #+#    #+#             */
/*   Updated: 2024/10/31 22:34:27 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int i;
	int arg_count;
	int *arg_simple;
	int *stack_b;
	int op_count;

	i = 1;
	op_count = 0;
	arg_count = argc - 1;
	arg_simple = ft_simplify(ft_convert(argv, arg_count), arg_count);
	if (ft_sort_check(arg_simple) == 0)
		return (1);
	stack_b = calloc(arg_count + 1, sizeof(int));
	printf("\n\n\n\n===PUSH_SWAP_TEST===========\n");
	printf("============================\n");
	printf("\n\n\n----UNSORTED STACK----------\n\n");
	while (i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
	i = 0;
	printf("\n\n\n\n\n----SIMPLE STACK-------------\n\n");
	while (i < arg_count)
	{
		printf("%i ", arg_simple[i]);
		i++;
	}
	i = 0;
	printf("\n\n\n\n\n----OPERATIONS---------------\n\n");
	// sort three
	if (arg_count >= 3 && arg_count < 4)
	{
		ft_sort_three(arg_simple, &op_count);
		printf("\n\n\n\n\n----SORTED STACK-------------\n\n");
		while (i < arg_count)
		{
			printf("%i ", arg_simple[i]);
			i++;
		}
		printf("\n\n\n\n===INFO======================");
		printf("\n\n\n -size: %i\n", arg_count);
		printf("\n -method: sort_three\n");
	}
	// sort four
	if (arg_count >= 4 && arg_count < 5)
	{
		ft_sort_four(arg_simple, stack_b, &op_count);
		printf("\n\n\n\n\n----SORTED STACK-------------\n\n");
		while (i < arg_count)
		{
			printf("%i ", arg_simple[i]);
			i++;
		}
		printf("\n\n\n\n===INFO======================");
		printf("\n\n\n -size: %i\n", arg_count);
		printf("\n -method: sort_four\n");
	}
	// sort five
	if (arg_count >= 5 && arg_count < 6)
	{
		ft_sort_five(arg_simple, stack_b, &op_count);
		printf("\n\n\n\n\n----SORTED STACK-------------\n\n");
		while (i < arg_count)
		{
			printf("%i ", arg_simple[i]);
			i++;
		}
		printf("\n\n\n\n===INFO======================");
		printf("\n\n\n -size: %i\n", arg_count);
		printf("\n -method: sort_five\n");
	}
	// jonas_sort
	else if (arg_count >= 6 && arg_count <= 26)
	{
		ft_jonas_sort(arg_simple, stack_b, arg_count, &op_count);
		printf("\n\n\n\n\n----SORTED STACK-------------\n\n");
		while (i < arg_count)
		{
			printf("%i ", arg_simple[i]);
			i++;
		}
		printf("\n\n\n\n===INFO======================");
		printf("\n\n\n -size: %i\n", arg_count);
		printf("\n -method: jonas_sort\n");
	}
	//radix sort
	else if (arg_count > 26)
	{
		ft_radix_sort(arg_simple, stack_b, arg_count, &op_count);
		printf("\n\n\n\n\n----SORTED STACK-------------\n\n");
		while (i < arg_count)
		{
			printf("%i ", arg_simple[i]);
			i++;
		}
		printf("\n\n\n\n===INFO======================");
		printf("\n\n\n -size: %i\n", arg_count);
		printf("\n -method: radix_sort\n");
	}
	
	printf("\n -operations: %i\n", op_count);
	printf("\n\n");
	ft_sort_check(arg_simple);
}