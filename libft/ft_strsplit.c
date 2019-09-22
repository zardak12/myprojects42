/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:39:38 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/22 17:46:52 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(const char *str, char c)
{
	int	w;
	int	i;

	i = 0;
	w = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			w++;
		i++;
	}
	if (str[0] != '\0')
		w++;
	return (w);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		m;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	m = 0;
	while (str[*i] != c && str[*i])
	{
		s[m] = str[*i];
		m++;
		*i += 1;
	}
	s[m] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		word;
	char	**s;

	i = 0;
	j = 0;
	word = ft_count(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (ft_count(str, c) + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < word && str[i])
	{
		s[j] = ft_word(str, c, &i);
		j++;
	}
	s[j] = NULL;
	return (s);
}
