/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosgrey <kosgrey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:13:03 by kosgrey           #+#    #+#             */
/*   Updated: 2019/11/09 22:08:34 by kosgrey          ###   ########.fr       */
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
typedef struct  my_struct
{
    int x;
    int y;
}               Node;

typedef struct s_list
{
    Node coord[4];
    int length;
    int weidth;
    struct s_list *next;
}               t_list;

void	start_coord(t_list **list);
void	win_leng(t_list **list);
void	network(t_list **head, t_list *list);
t_list	*save_tetramino(char *tmp);
void	print_error ();
#endif