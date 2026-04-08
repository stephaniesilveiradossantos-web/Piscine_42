/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:32:16 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/08 14:14:06 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	number;

	number = '1';
	while (number <= '9')
	{
		write (1, &number, 1);
		number++;
	}
}
/* int main(void)
{
	ft_print_numbers();
} */
