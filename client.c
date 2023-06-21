/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:51:51 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/21 12:24:51 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int checkArgs(int ac)
{
	if (ac != 3)
		return (1);
	return (0);
}

void sendMessage(int pid, char *str)
{
	int	bits;

	while(*str)
	{
		bits = 0;
		while(bits != 8)
		{
			if((*str & (0x01 << bits)) != 0)
				kill(pid, SIGUSR1);
				
			else
				kill(pid, SIGUSR2);
			usleep(50);
			bits++;
		}
		str++;
	}
			
}

int main(int argc, char **argv)
{
	int pid;
	if(checkArgs(argc))
	{
		printf("Wrong number of arguments");
		return (1);
	}
	pid = atoi(argv[1]);
	sendMessage(pid, argv[2]);
	return (0);
}