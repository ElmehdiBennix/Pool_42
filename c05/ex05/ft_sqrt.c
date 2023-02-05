/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:16:50 by ebennix           #+#    #+#             */
/*   Updated: 2022/08/10 19:43:31 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	a = 2;
	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	if (b >= 2)
	{
		while (a * a <= b)
		{
			if (a * a == b)
			{
				return (a);
			}
			a++;
		}
	}
	return (0);
}