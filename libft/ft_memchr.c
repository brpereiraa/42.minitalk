/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:21:23 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/22 15:13:02 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	num;

	i = 0;
	d = (unsigned char *)s;
	num = (unsigned char)c;
	while (i < n)
	{
		if (d[i] == num)
			return (&d[i]);
		i++;
	}
	return (NULL);
}
