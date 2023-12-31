/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:52:21 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/21 15:07:04 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_msg(int signal)
{
	static int				bit_count = 0;
	static unsigned char	c = 0;

	if (signal == SIGUSR1)
		c |= (0x01 << bit_count);
	bit_count++;
	if (bit_count == 8)
	{
		ft_printf ("%c", c);
		c = 0;
		bit_count = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf ("PID: %i\n", pid);
	ft_printf ("Waiting on message from client... \n");
	while (true)
	{
		signal (SIGUSR1, handle_msg);
		signal (SIGUSR2, handle_msg);
	}
	return (0);
}
