/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:06:33 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/13 19:06:37 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void ft_swap(int *a, int *b)
{
	int	z;

    z	= *a;
    *a	= *b;
    *b	= z;
}
/* int main(void)
{
	int	a = 4;

	int b = 2;

	ft_swap(&a, &b);
	printf("%d, %d", a, b);
	return '0';
} */