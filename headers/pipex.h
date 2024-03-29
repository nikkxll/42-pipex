/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:18:17 by dnikifor          #+#    #+#             */
/*   Updated: 2024/01/13 22:09:33 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "get_next_line.h"
# include <fcntl.h>

typedef struct s_pipex
{
	pid_t	*pids;
	char	**cmd_args;
	char	*path_to_check;
	char	*manual_path;
	int		cmd_number;
	int		path_flag;
	int		track_fd;
	int		last_fd;
	int		fd[2];
}	t_pipex;

int		ft_pipex(t_pipex *ppxb, char **av, char **env, int ac);
void	piping(t_pipex *ppx, char **av, char **env, int ac);
void	error(char *message, t_pipex *ppx, int error_num);
void	error_cmd(char *message, t_pipex *ppx, int error_num);
void	error_file(char *message, char *file, t_pipex *ppx, int error_num);
int		first_file_validation(char **argv, t_pipex *ppx);
int		second_file_validation(int argc, char **argv, t_pipex *ppx);
int		if_path_exist(t_pipex *ppx, char **envp);
int		check_if_executable(t_pipex *ppx, char *cmd, char *path);
void	ft_free_split(char **split);
void	subs(char *str);
void	loop_free(t_pipex *ppx, char *part);
void	ft_execve_fail(char *message, char *path, char *cmd, t_pipex *ppx);

#endif
