/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 10:42:18 by pntsunts          #+#    #+#             */
/*   Updated: 2020/06/30 10:42:51 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int   ft_echo(char *str[])
{
	char store;

	int run;

	store = 0;
	run = 0;
	str++;
	/*if (*str && (*str)[run++] == '-')
	{
		while ((*str)[run] == 'n')
			run++;
		if (!(*str)[run])
		{
			store = 'n';
			str++;
		}
	}*/
	while (*str)
	{
		ft_putstr(*str++);
		if (*str)
			ft_putchar(' ');
	}
	if (!store)
		write(1, "\n", 1);
	return (1);
}
