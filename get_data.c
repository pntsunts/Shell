/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:01:30 by pntsunts          #+#    #+#             */
/*   Updated: 2020/06/30 09:03:58 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

size_t  datalen(char *env[])
{
	int x;

	x = 0;

	while (env[x] != NULL)
	{
		x++;
	}
	return (x);
}

void get_data(char *env[])
{
	int i;
	i = 0;

	Data = (char **)malloc(sizeof(char *) * (datalen(env) + 1));

	while (env[i])
	{
		Data[i] = ft_strdup(env[i]);
		i++;
	}
	Data[i] = NULL;
}

void print_data(void)
{
	int i;

	i = 0;
	while (Data[i])
	{
		ft_putendl(Data[i]);
		i++;
	}
}
