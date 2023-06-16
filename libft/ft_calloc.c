/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:34:19 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/15 06:20:30 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			i;
	char			*arr;
	unsigned int	total;

	total = n * size;
	i = 0;
	arr = (char *)malloc(n * size);
	if (arr == NULL)
		return (NULL);
	while (total > 0)
	{
		arr[i] = 0;
		i++;
		total--;
	}
	return ((void *)arr);
}
