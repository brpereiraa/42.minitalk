/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:50:31 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:02:03 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_str(char *s)
{
	size_t	i;

	i = -1;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[++i])
		ft_putchar_fd(s[i], 1);
	return (i);
}
