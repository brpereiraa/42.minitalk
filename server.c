/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:52:21 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/21 10:50:58 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void handle_msg(int signal)
{
	static int	bit_count;
	static unsigned char	c;

	bit_count = 0;
	if(signal == SIGUSR1)
		c |= (0x01 << bit_count);
	bit_count++;
	if(bit_count && c)
	{
		write(1, &c, 1);
		c = 0;
		bit_count = 0;
	}
}

int main(void)
{
	printf("PID: %i\n", getpid());
	printf("Waiting on message");
	while(true)
	{
		signal(SIGUSR1, handle_msg);
		signal(SIGUSR2, handle_msg);
	}
	return (0);
}