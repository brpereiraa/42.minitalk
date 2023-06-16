/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:28:01 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/24 19:32:50 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr((char *)set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, start, i - start + 1));
}
