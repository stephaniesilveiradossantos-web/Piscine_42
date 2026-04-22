/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilvei <stsilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:44:21 by stsilvei          #+#    #+#             */
/*   Updated: 2026/04/22 17:36:59 by stsilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

 int main(void)
{
	char ex[] = "noah"
	
	printf ( "min: %s\n", ex);
	printf ("mai: %s\n", ft_strupcase(ex));
	return (0);
}
 