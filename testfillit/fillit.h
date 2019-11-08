/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mark <mark@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:13:03 by kosgrey           #+#    #+#             */
/*   Updated: 2019/11/03 03:25:51 by mark             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h> 
# include "libft/libft.h"

#define BUFF_SIZE 21

typedef struct  my_coordinate_of_tetramino
{
    int x;
    int y;
}               My_cot;

typedef struct s_value_teramino
{
    int len;
    My_cot    coord[4];
    struct s_value_teramino *next;
}               t_v_t;

int tetramino;
t_v_t *list;
#endif