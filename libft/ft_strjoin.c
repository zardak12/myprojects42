/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:02:18 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/20 20:13:09 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	memmory;

	if (s1 && s2)
		memmory = (size_t)(ft_strlen(((char*)s1) + ft_strlen((char*)s2)));
	if (s1)
		memmory = (size_t)(ft_strlen((char*)s1));
	if (s2)
		memmory = (size_t)(ft_strlen((char*)s2));
	else
		return (NULL);
	result = ft_memalloc(memmory);
	if (result == NULL)
		return (NULL);
	if (s1)
		result = ft_strcpy(result, (char*)s1);
	else
		result = ft_strcpy(result, (char*)s2);
	if (s1 && s2)
		result = ft_strcat(result, (char*)s2);
	return (result);
}
