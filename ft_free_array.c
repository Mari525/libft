/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <mbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:15:37 by mbirdie           #+#    #+#             */
/*   Updated: 2019/10/09 14:09:57 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **str, int len)
{
	int		i;

	i = 0;
	if (str)
	{
		while (i < len)
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}
