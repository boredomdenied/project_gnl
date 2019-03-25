/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 03:01:11 by bchapman          #+#    #+#             */
/*   Updated: 2019/03/24 21:39:24 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 835
# include "libft/libft.h"
# include <unistd.h>

typedef struct		s_elem
{
	int				fd;
	char			*chunk;
	struct s_elem	*next;
}					t_elem;

int					get_next_line(const int fd, char **line);
int					ft_new_line(t_elem **list, char **line, int fd, int ret);
#endif
