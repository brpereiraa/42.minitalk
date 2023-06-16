/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:02:15 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/15 20:22:03 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
