/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:26:09 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:02:05 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa_long(unsigned int n)
{
	char			*c;
	unsigned int	num;
	unsigned int	nb;

	nb = n;
	num = count (nb);
	c = (char *)malloc(sizeof(char) * (num + 1));
	if (!c)
		return (NULL);
	c[num--] = '\0';
	if (nb == 0)
	{
		c[0] = '0';
		return (c);
	}
	while (nb > 0)
	{
		c[num--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (c);
}

int	ft_print_unsigned_decimal(unsigned int c)
{
	char	*temp;
	int		size;

	if (c == 0)
		return (write(1, "0", 1));
	temp = ft_itoa_long(c);
	ft_putstr_fd (temp, 1);
	size = ft_strlen (temp);
	free(temp);
	return (size);
}
