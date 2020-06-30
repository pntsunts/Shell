/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 13:15:32 by pntsunts          #+#    #+#             */
/*   Updated: 2020/06/30 13:18:10 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

size_t  envlen(char **str)
{
	int x;

	x = 0;
	while (str[x] != NULL)
	{
		x++;
	}
	return (x);
}

int		checkstr(char **str)
{
	if (envlen(str) != 3)
	{
		ft_putendl("setenv : \033[0mtoo few or many arguments\36m");
		return (1);
	}
	return (0);
}
