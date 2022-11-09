/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:58:03 by iung              #+#    #+#             */
/*   Updated: 2022/10/05 23:09:30 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nb;

	nb = *a;
	*a = *b;
	*b = nb;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{	
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
