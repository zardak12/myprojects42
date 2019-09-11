/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:19:50 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/08 17:23:07 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char*)destination;
	second = (unsigned char*)source;
	if (n == 0)
		return (destination);
	while (n)
	{
		*first = *second;
		if (*second == (unsigned char)c)
			return (first);
		first++;
		second++;
		n--;
	}
	return (first);
}
