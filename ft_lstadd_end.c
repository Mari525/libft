/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <mbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:05:17 by mbirdie           #+#    #+#             */
/*   Updated: 2019/10/09 11:53:40 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst && new)
	{
		tmp = *alst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
