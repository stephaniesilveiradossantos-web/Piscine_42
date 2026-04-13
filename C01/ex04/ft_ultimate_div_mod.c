/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:18:49 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/13 18:59:46 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/* 
 int main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;

	printf("Antes: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("Depois: a = %d, b = %d\n", a, b);

	return (0);
} */