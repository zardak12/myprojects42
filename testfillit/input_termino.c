#include "fillit.h"
#include <stdio.h>

t_v_t       *save_tetramino(char *tmp)
{
    int i;
    int j;
    t_v_t   *p;
    j = 0;
    i = 0;
    p = malloc(sizeof(t_v_t));
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
int check_is_it_teramino (int i, char *tmp)
{
    int tetramino;
    int point;
    int network;

    point = 0;
    network = 0;
    while (tmp[i] != '\0')
        {
            if (tmp[i] == '.')
            {
                point++;
            }
            if (tmp[i] ==  '#')
            {
                if (tmp[i] == tmp[i + 1])
                {
                    network++;
                }
                if ((i < 16) && tmp[i] == tmp[i + 5])
                {
                    network++;
                }
            
            }
            i++;
        }
        if ((network == 3 || network == 4) && (point == 12))
            return (1);
    return 0;
}
int read_tetramino(int fd,char *tmp)
{
    int j;
    int i;
    int f;
    list = malloc(sizeof(t_v_t));
    t_v_t *head;
    list = head;
    tetramino = 0;
    j = 0;
    while ((j = read(fd,tmp,BUFF_SIZE)) > 0)
    {
        tmp[j] = '\0';
        i = 0;
        if (check_is_it_teramino(i,tmp) == 1)
        {
            tetramino++;
            list = save_tetramino(tmp);
            list -> next = malloc(sizeof(t_v_t));
            list->len = list->coord[3].y - list->coord[0].y + 1;
            f = 0;
            while (f < 4)
            {
                printf("%c%d",'(',list->coord[f].x);
                printf("%c",',');
                printf("%d%c",list->coord[f].y,')');
                printf("%c",'\n');
                
                f++;
            }
            printf("%d\n",list->len);
            list = list->next;
        }
        else
            print_error();
    }
    list->next = NULL;
    return (0);
}
int main(void)
{
    int fd;
    char tmp[BUFF_SIZE +1];
    int f;

    fd = open("txt.txt",O_RDONLY);
    read_tetramino(fd,tmp);
    printf("%d\n",tetramino);
    close(fd);
    return (0);
}