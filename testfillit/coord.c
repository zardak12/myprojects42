#include "fillit.h"

void	wid_leng(t_list **list)
{
	int max_y;
	int max_x;
	int i;

	i = -1;
	max_y = (*list)->coord[0].x;
	max_x = (*list)->coord[0].y;
	while (++i < 4)
	{
		if ((*list)->coord[i].x > max_x)
			max_x = (*list)->coord[i].x;
		if ((*list)->coord[i].y > max_y)
			max_y = (*list)->coord[i].y;
	}
}

void	start_coord(t_list **list)
{
	int i;
	int a;
	int j;

	i = -1;
	a = 0;
	while (++i < 4)
	{
		(*list)->coord[i].x -= (*list)->coord[0].x;
		(*list)->coord[i].y -= (*list)->coord[0].y;
	}
	i = -1;
	while (++i < 4)
		if ((*list)->coord[i].x < 0)
		{
			j = -1;
			a = (*list)->coord[i].x;
			while (++j < 4)
				(*list)->coord[i].x -= a;	
		}
	wid_leng(list);
}

void	network(t_list **head, t_list *list)
{
	t_list *tmp;

	tmp = *head;
	if (tmp)
	{
		while (tmp -> next)
			tmp = tmp -> next;
		tmp -> next = list;
	}
	else
		*head = list;
	
}

t_list *save_tetramino(char *tmp)
{
	int i;
	int j;
	t_list *p;

	j = 0;
	i = 0;
	p = malloc(sizeof(t_list));
	p->next = NULL;
	while (j<21)
	{
		if (tmp[j] == '#')
		{
			p -> coord[i].x = j % 5;
			p -> coord[i].y = j / 5;
			i++;
		}
		j++;
	}
	return (p);
}

void print_error ()
{
	ft_putendl("Error");
	exit(0);
}