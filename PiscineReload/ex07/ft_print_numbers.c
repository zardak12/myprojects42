/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:37:50 by kosgrey           #+#    #+#             */
/*   Updated: 2019/09/07 16:24:53 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		ft_putchar(c + '0');
		c++;
	}
}
