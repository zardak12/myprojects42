/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:15:49 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/16 18:47:17 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *need)
{
	size_t i;

	i = 0;
	if (need == '\0')
		return ((char*)hay);
	while (*hay)
	{
		while (hay[i] && (hay[i] == need[i]))
		{
			if (hay[i] == '\0')
				return ((char*)hay);
			i++;
		}
		hay++;
	}
	return (NULL);
}
