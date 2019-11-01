/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:46:24 by mbirdie           #+#    #+#             */
/*   Updated: 2019/09/14 16:47:41 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str)
		str++;
	if (c == '\0')
		return ((char*)str);
	while (--str >= s)
	{
		if (c == *str)
			return ((char*)str);
	}
	return (0);
}
