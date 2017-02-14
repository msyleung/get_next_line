/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:43:38 by sleung            #+#    #+#             */
/*   Updated: 2016/12/09 17:50:17 by sleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*alst_begin;

	if (!alst)
	{
		(*alst)->content = new;
		(*alst)->next = NULL;
	}
	else
	{
		alst_begin = new;
		alst_begin->next = *alst;
		*alst = alst_begin;
	}
}
