/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:31:57 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/10 12:09:11 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *s)
{
	char *first;
	const char *second;

	first = dest;
	second = s;
	while (*second)
	{
		*first = *second;
		first++;
		second++;
	}
	return (first);
}
