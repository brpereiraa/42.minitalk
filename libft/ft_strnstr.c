/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:45:01 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/23 19:03:34 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int n)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	if (!n)
		return (NULL);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && ((i + j) < n))
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
