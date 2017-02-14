/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:12:39 by sleung            #+#    #+#             */
/*   Updated: 2016/12/11 13:52:22 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strtrim(char const *s)
{
	char	*fresh;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strtrimlen(s);
	fresh = (char *)malloc(sizeof(char) * (len + 2));
	if (!fresh)
		return (NULL);
	fresh = ft_strtrimcopy(len, s, fresh);
	return (fresh);
}
