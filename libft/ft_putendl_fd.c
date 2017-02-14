/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:32:54 by sleung            #+#    #+#             */
/*   Updated: 2016/12/07 15:35:02 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	int	n;

	n = 0;
	if (!s)
		return ;
	while (s[n])
	{
		write(fd, &s[n], 1);
		n++;
	}
	write(fd, "\n", 1);
}
