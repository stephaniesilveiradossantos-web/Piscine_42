/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:25:17 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/23 19:37:05 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	char	alph;
	
	alph = 'z';
	while (alph >= 'a') // vou usar o >= se for maior ou igual, usado para 'diminuir'
	{
		write(1, &alph, 1);
		alph--; // se esta diminuindo deve utilizar --
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}