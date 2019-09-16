/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:26:31 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/15 19:42:25 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*first;
	char	*second;
	size_t	i;

	i = 0;
	first = (char*)dst;
	second = (char*)src;
	if (second < first)
	{
		while (len > 0)
		{
			first[len - 1] = second[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			first[i] = second[i];
			i++;
		}
	}
	return (dst);
}
