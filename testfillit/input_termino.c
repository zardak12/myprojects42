#include "fillit.h"
#include <stdio.h>
t_list coordinates (int i)
{
    t_list *a;
    t_list *b;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    
}
void check_teramino (int point, int network, int i, char *tmp)
{
    int tetramino;
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
            tetramino++;
}
int main(void)
{

    int tetramino;
    int fd;
    int j;
    int i;
    int network;
    int point;
    char tmp[22];

    fd = open("txt.txt",O_RDONLY);
    j = 0;
    while ((j = read(fd,tmp,21)) > 0)
    {
        tmp[21] = '\0';
        point = 0;
        network = 0;
        i = 0;
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
            tetramino++;
    }
    printf("%d",tetramino);
    close(fd);
    return (0);
}