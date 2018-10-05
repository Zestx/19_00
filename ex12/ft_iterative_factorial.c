/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbackaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 14:49:32 by qbackaer          #+#    #+#             */
/*   Updated: 2018/10/03 14:19:10 by qbackaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nbr)
{
	int i;
	int f_nbr;

	f_nbr = 1;
	i = 1;
	if (nbr > 12 || nbr < 0)
		return (0);
	while (i <= nbr)
	{
		f_nbr *= i;
		i++;
	}
	return (f_nbr);
}
