/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:02:20 by ebennix           #+#    #+#             */
/*   Updated: 2022/07/27 03:03:15 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	indx;
	int	riv;
	int	swap;

	indx = 0;
	riv = size - 1;
	while (indx < (size / 2))
	{
		swap = tab[indx];
		tab[indx] = tab[riv];
		tab[riv] = swap ;
		riv--;
		indx++;
	}
}
