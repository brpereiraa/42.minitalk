/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:52:21 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/16 21:02:12 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void handle_msg(int signal)
{
	static int	bit_count;
	static unsigned char	c;

	bit_count = -1;
	if(bit_count < 0)
		bit_count = 7;
	if(signal == SIGUSR1)
		c |= (1 << bits);
	bit_count--;
	if(bit_count && c)
	{
		ft_putchar_fd(c, 1);
		c = NULL;
	}
}

int main(void)
{
	ft_printf("PID: %i\n", getpid());
	ft_printf("Waiting on message");
	while(true)
	{
		signal(SIGUSR1, handle_msg);
		signal(SIGUSR2, handle_msg);
	}
	return (0);
}