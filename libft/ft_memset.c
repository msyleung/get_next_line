/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:04:41 by sleung            #+#    #+#             */
/*   Updated: 2016/12/04 17:09:23 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	char			*str;
	int				i;

	val = (unsigned char)c;
	i = 0;
	str = (char *)b;
	while (len > 0)
	{
		str[i] = val;
		len--;
		i++;
	}
	b = (void *)str;
	return (b);
}
