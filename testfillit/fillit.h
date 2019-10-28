/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <kosgrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:13:03 by kosgrey           #+#    #+#             */
/*   Updated: 2019/10/28 19:15:03 by kosgrey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
#define BUFF_SIZE 21
typedef struct s_list
{
    int x;
    int y;
    int length;
    struct s_list *next;
}               t_list;

#endif