/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbackaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 17:29:27 by qbackaer          #+#    #+#             */
/*   Updated: 2018/10/03 17:25:51 by qbackaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	size = max - min;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (size));
	i = 0;
	while (i < size)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}
