/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:41:31 by pntsunts          #+#    #+#             */
/*   Updated: 2020/06/30 09:25:20 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

/*static int Process(char *str[], int run)
{
	pid_t proc;

	proc = fork();
	if (proc == 0)
	{

	}
}*/

static char *get_lines()
{
	char *line;
	line = NULL;
	get_next_line(0, &line);
	return (line);
}

static int check_exec(char *str[])
{
	int run;

	run = 1;
	if (!str || !*str || !**str || str[0] == NULL)
		return (1);
	if (ft_strcmp(*str, "exit") == 0)
	{
		ft_putendl("EXITING!!!!");
		exit(0);
	}
	else if (ft_strcmp(*str, "env") == 0)
	{
		print_data();
		return (1);
	}
	else 
		return (0);
}

static  void read_files(char *env[])
{
	char *Data;

	int run;
	char **split;
	pid_t process;

	run = 1;
	while (run)
	{
		ft_putstr("Wethinkcode\033[32m$>\033[36m ");
		Data = get_lines();
		process = fork();
		if (process == 0)
		{
			split = ft_strsplit(Data, ' ');
			run = check_exec(split);
			if (execve(split[0], split, env) == -1)
				exit(-1);
		}
		if (process > 0)
			wait(&process);
			if (ft_strcmp(Data, "exit") == 0)
				exit(0);
	}
}

int main(int ac, char **av, char *env[])
{
	(void)ac;
	(void)av;
	get_data(env);
	read_files(env);
	return (0);
}
