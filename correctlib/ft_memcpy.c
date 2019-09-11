/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:29:10 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/08 16:14:39 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char*)dst;
	second = (unsigned char*)src;
	if (n == 0)
		return (dst);
	while (n)
	{
		*first = *second;
		first++;
		second++;
		n--;
	}
	return (first);
}
