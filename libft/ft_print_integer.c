/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:50 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:02:19 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_integer(int c)
{
	char	*temp;
	int		size;

	if (!c)
		return (write(1, "0", 1));
	temp = ft_itoa (c);
	ft_putstr_fd (temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}
