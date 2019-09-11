/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:10:31 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/10 12:22:00 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *first;
	const char *second;
	size_t i;

	i = 0;
	first = dst;
	second = src;
	while ((second[i]) && (i < len))
	{
		first[i] = second[i];
		i++;
	}
	first[i] = '\0';
	return (first);
}
