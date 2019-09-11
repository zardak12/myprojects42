/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:15:32 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/11 16:16:55 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char *need;

	need = s;
	while (*need)
	{
		if (*need == c)
			return ((char*)need);
		need++;
	}
	if (c == '\0')
	{
		return ((char*)need);
	}
	return (NULL);
}
