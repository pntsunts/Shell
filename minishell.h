/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:05:26 by pntsunts          #+#    #+#             */
/*   Updated: 2020/06/30 09:03:19 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>

#define	BUFF_SIZE 32

char **Data;

int		get_next_line(const int fd, char **line);
size_t  datalen(char *env[]);
void    get_data(char *env[]);
int 	ft_fork(char *path, char *args[]);
void    print_data(void);

#endif
