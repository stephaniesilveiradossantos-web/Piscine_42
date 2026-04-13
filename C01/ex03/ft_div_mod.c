/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:44:30 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/12 20:27:37 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int	a = 5;
	int b = 2;
	int x = 0;
	int y = 0;

	ft_div_mod(a, b, &x, &y);
	printf("%d, %d", x, y);
	return '0';
}