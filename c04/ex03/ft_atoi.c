/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:58:15 by ebennix           #+#    #+#             */
/*   Updated: 2022/08/07 01:43:50 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaces(char str)
{
	if (str == 32 || (str >= 9 && str <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	rep;

	i = 0 ;
	sign = 1;
	rep = 0;
	while (str[i] != '\0' && spaces(str[i]))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
	rep = rep * 10 + (str[i] - 48);
	i++;
	}
	return (rep * sign);
}
