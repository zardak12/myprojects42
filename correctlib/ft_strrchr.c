/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:17:12 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/11 16:18:29 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*need;
	char	*value;

	value = (0);
	need = s;
	while (*need)
	{
		if (*need == c)
			value = (char*)need;
		need++;
	}
	if (value)
		return ((char*)value);
	if (need)
		return ((char*)need);
	return (NULL);
}
