/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 11:38:40 by sleung            #+#    #+#             */
/*   Updated: 2016/12/11 10:37:27 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*csrc;
	char		*cdst;

	i = 0;
	csrc = (const char *)src;
	cdst = (char *)dst;
	while (n > i)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
