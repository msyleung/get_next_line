/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 13:53:20 by sleung            #+#    #+#             */
/*   Updated: 2017/01/26 12:26:23 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42
# define S_ULIM 4864

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_files
{
	char		*file;
	char		*fd_line;
	int			reading;
	int			s;
	int			n;
}				t_files;

int				get_next_line(const int fd, char **line);

#endif
