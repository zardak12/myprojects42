/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:08:40 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/16 18:06:35 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t n;

	n = 0;
	i = 0;
	if (need == '\0')
		return ((char*)hay);
	 while (hay[n] && n < len)
	{
		if (hay[n] == need[0])
		{
			i = 1;
			while ((need[i]) && (n + i < len)  && (hay[n + i] == need[i]))
				i++;
			if (need[i] == '\0')
				return ((char*)&hay[n]);
		}
		n++;
	}
	return (0);
}
