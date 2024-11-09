/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:40:23 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/09 16:48:59 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	ft_size(long n)
{
	int	size;

	size = -1;
	if (n < 0)
		size = 0;
	if (n == 0)
		return (1);
	while (size++, n != 0)
		n = n / 10;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		size;
	long	num;

	num = n;
	size = ft_size(num);
	tab = malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	tab[size] = '\0';
	if (num < 0)
	{
		tab[0] = '-';
		num *= -1;
	}
	while (size-- > 0)
	{
		if (tab[size] != '-')
			tab[size] = (num % 10) + '0';
		num = num / 10;
	}
	return (tab);
}
