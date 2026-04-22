/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:53:56 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/22 19:29:56 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	/* int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1); 
	} */

	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	char strz[] = "chuvanotelhado";
	char strx[] = "SstIFsfs";
	char strv[] = "";
	char stry[] = "123456789";
	char stru[] = "!@";

	printf ("%d\n", ft_str_is_alpha(strz));
	printf ("%d\n", ft_str_is_alpha(strx));
	printf ("%d\n", ft_str_is_alpha(strv));
	printf ("%d\n", ft_str_is_alpha(stry));
	printf ("%d\n", ft_str_is_alpha(stru));
}