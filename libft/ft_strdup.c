/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 12:59:09 by sleung            #+#    #+#             */
/*   Updated: 2017/01/19 12:18:23 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*tmp;

	len = ft_strlen((char *)s1);
	tmp = (char *)(malloc(sizeof(char) * len + 1));
	if (tmp == NULL)
		return (NULL);
	ft_strcpy(tmp, (char *)s1);
	return (tmp);
}
