/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:02:18 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/23 18:45:25 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);// so utilizamos o write na prova, para imprimir 1 caractere
}

int main(void)
{
	char	c; // depois precisamos criar a variavel
	
	c = 'z'; // em seguida colocamos oque aquela variavel representa, no caso oque ha dentro dela 

	ft_putchar(c); // dentro da funchao que estamos puxando colocamos a nossa variavel.
}

// lembrar sempre de colocar o ; 