/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbackaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:53:44 by qbackaer          #+#    #+#             */
/*   Updated: 2018/10/03 14:12:20 by qbackaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_putchar(char c);
void	print_args(int argc, char **argv);
void	print_strn(char *argv);

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			result += (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (result);
}

void	print_args(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		print_strn(argv[i]);
		ft_putchar(10);
		i++;
	}
}

void	print_strn(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		ft_putchar(argv[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		j;
	int		i;
	int		min;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		min = i;
		while (j + 1 <= argc)
		{
			if (ft_strcmp(argv[j], argv[min]) < 0)
				min = j;
			j++;
		}
		tmp = argv[i];
		argv[i] = argv[min];
		argv[min] = tmp;
		i++;
	}
	i = 1;
	print_args(argc, argv);
	return (0);
}
