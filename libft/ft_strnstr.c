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

	i = 0;
	if (need == '\0')
		return ((char*)hay);
	while ((len--) && (hay[i]) && (need[i]))
	{
		if (hay[i] == need[i])
			i++;
		else
			return (NULL);
	}
	if (hay == need)
		return ((char*)hay);
	return (NULL);
}
