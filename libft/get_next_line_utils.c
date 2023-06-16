/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:50:51 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:01:31 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strchrn(const char *str)
{
	size_t	i;

	i = -1;
	if (!str)
		return (0);
	while (str[++i])
	{
		if (str[i] == '\n')
			return (1);
	}
	return (0);
}

char	*join_string(char *s1, char *s2)
{
	char	*ret;
	char	*p;
	int		i;
	int		j;
	size_t	size;

	size = ft_strlen(s2);
	if (s1)
		size += ft_strlen(s1);
	p = (char *)malloc(sizeof(*p) * (size + 1));
	if (!p)
		return (NULL);
	ret = p;
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		p[i++] = s2[j++];
	p[i] = 0;
	free(s1);
	return (ret);
}
