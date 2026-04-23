/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:45:56 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/23 19:24:55 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
	char	alph;

	alph = 'a';
	while (alph <= 'z')// o loop deve continuar ate ser igual ou diferente(<=) de z(122)
	{
		write(1, &alph, 1); 
		alph++; // ele vai cotinuar o loop ate chegar no z (122) (tabela ascii)
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}