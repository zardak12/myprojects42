/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:32:24 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/04 20:43:23 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	int c;

	c = 1;
	while (c <= 9)
	{
		ft_putchar(c + '0');
		c++;
	}
}