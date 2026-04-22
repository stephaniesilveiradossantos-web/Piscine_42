/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:39:34 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/22 17:28:55 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32 || *str > 126))
			return (0);
			str++;
	}
	return (1);
}

/* int main(void)
{
	char str[] = "chuva\ncno\ntelhado";
	char strb[] = "chuvanotelhado";

	printf ( "%d\n", ft_str_is_printable(str));
	printf ( "%d,n", ft_str_is_printable(strb));
	
	return 0;
} */