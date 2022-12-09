/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:35:27 by ebennix           #+#    #+#             */
/*   Updated: 2022/08/09 00:08:04 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (ac && av[0][i] != '\0')
	{
		ft_putchar(av[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
