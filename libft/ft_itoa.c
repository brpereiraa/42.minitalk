/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:50:11 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/23 17:59:30 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	count(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*if_zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			num;
	char		*c;
	long int	nb;

	nb = n;
	num = count(nb);
	c = (char *)malloc(sizeof(char) * (num + 1));
	if (!c)
		return (NULL);
	c[num--] = '\0';
	if (nb == 0)
		return (if_zero(c));
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		c[num--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (c);
}
