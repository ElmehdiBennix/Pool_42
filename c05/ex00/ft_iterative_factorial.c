/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:00:55 by ebennix           #+#    #+#             */
/*   Updated: 2022/08/10 09:47:26 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	x;

	x = 1;
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (x);
}
