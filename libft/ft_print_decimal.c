/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:50:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/06/16 10:02:35 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_decimal(int c)
{
	char	*temp;
	size_t	size;

	if (!c)
		return (write(1, "0", 1));
	temp = ft_itoa (c);
	ft_putstr_fd (temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}
