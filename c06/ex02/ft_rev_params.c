/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:12:44 by ebennix           #+#    #+#             */
/*   Updated: 2022/08/09 01:34:01 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[ac - i]);
		ft_putstr("\n");
	}
}
