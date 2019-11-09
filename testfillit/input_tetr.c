#include "fillit.h"
#include <stdio.h>

int check_is_it_teramino (int i, char *tmp)
{
	int point;
	int network;

	point = 0;
	network = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == '.')
			point++;
		if (tmp[i] == '#')
		{
			if (tmp[i] == tmp[i + 1])
				network++;
			if ((i < 16) && tmp[i] == tmp[i + 5])
				network++;
		}
	i++;
	}
	if ((network == 3 || network == 4) && (point == 12))
		return (1);
	return 0;
}

int read_tetramino(int fd, t_list **head)
{
	int tetramino;
	int j;
	int i;
	char tmp[BUFF_SIZE +1];
	t_list *list;

	tetramino = 0;
	j = 0;
	while ((j = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		tmp[j] = '\0';
		i = 0;
		if (check_is_it_teramino(i, tmp) == 1)
		{
			tetramino++;
			list = save_tetramino(tmp);
			start_coord(&list);
			network(head,list);
		}
		else
			print_error();
	}
	return (tetramino);
}
int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

char	**tetri_map_new(char **map, int size)
{
	int x;
	int y;

	y = 0;
	if (!(map = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (y < size)
	{
		if (!(map[y] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		x = 0;
		while (x < size)
		{
			map[y][x] = '.';
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = 0;
	return (map);
}

int main(void)
{
	int	fd;
	int	tetramino;
	t_list	*head;
	int	n;
	char **map;

	head = NULL;
	fd = open("txt.txt", O_RDONLY);
	tetramino = read_tetramino(fd, &head);
	n = ft_sqrt(tetramino * 4);
	tetri_map_new(map,n);
	// t_list *lst = head;
	// while (lst)
	// {
	// 	printf("\n\n%d ", lst->coord[0].x);
	// 	lst = lst->next;
	// }
	// printf("\n\n");
	printf("%s\n", n);
	close(fd);
	return (0);
}