
#include "libft.h"

int	ft_atoi(const char *str)
{
	int 	i;
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] != '\0') && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (minus * result);
}
