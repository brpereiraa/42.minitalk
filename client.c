/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:51:51 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/16 12:55:22 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int checkArgs(int ac, char *av)
{
	if (ac != 3)
		return (1);
	if (!ft_isdigit(av))
		return (1);
	return (0);
}

char sendMessage(pid_t pid, const char *str)
{
	int	i
	int	bits;

	i = 0;
	while(str[i])
	{
		bits = 0;
		while(bits != 8)
		{
			if((str[i] & (0x01 << bits)) != 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(50);
			bits++;
		}
	}
			
}

int main(int argc, char **argv)
{
	int pid;
	if(checkArgs(argc, *argv[1]))
	{
		ft_printf("Wrong number of arguments or invalid PID;");
		return (0);
	}
	pid = ft_atoi(argv[1])
	sendMessage(pid	, *argv[2])
	return (0);
}