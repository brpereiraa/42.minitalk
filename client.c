/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:51:51 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/21 15:08:54 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	check_args(int ac)
{
	if (ac != 3)
		return (1);
	return (0);
}

void	send_message(int pid, char *str)
{
	int	bits;

	while (*str)
	{
		bits = 0;
		while (bits != 8)
		{
			if ((*str & (0x01 << bits)) != 0)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep (50);
			bits++;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (check_args (argc))
	{
		ft_printf ("Wrong number of arguments");
		return (1);
	}
	pid = ft_atoi (argv[1]);
	send_message (pid, argv[2]);
	send_message (pid, "\n");
	return (0);
}
