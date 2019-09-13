/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:26:31 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/13 20:14:21 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned char *first;
	unsigned char *second;

	first = (unsigned char*)str1;
	second = (unsigned char*)str2;
	if (str1 > str2)
	{
		while (len)
		{
			first[len] = second[len];
			len--;
		}
	}
	if (str1 < str2)
	{
		while (len--)
			*first++ == *second++;
	}
	return (str1);
}
