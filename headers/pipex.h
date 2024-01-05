/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:18:17 by dnikifor          #+#    #+#             */
/*   Updated: 2024/01/05 17:11:02 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct s_pipex
{
	int		file1_fd;
	int		file2_fd;
	int		cmd_number;
	int		pipe_end[2];
	pid_t	child_1;
	char	**all_paths_array;
	char	**cmd_args;
	int		exec_flag;
	int		path_flag;
	char	*cmd;
}	t_pipex;

void	ft_pipex(t_pipex *ppx, char **argv, char **envp, int argc);

void	error_message(char *message, t_pipex *ppx, int error_num);

void	first_file_validation(char **argv, t_pipex *ppx);
int		second_file_validation(int argc, char **argv, t_pipex *ppx);
int		if_path_exist(t_pipex *ppx, char **envp);
void	check_if_executable(t_pipex *ppx, char **argv);

#endif
