
#include "libft.h"

static int	check_sign(const char *str, int i, int sign)
{
	if (str[i] == '-')
		sign = -1;
	return (sign);
}

int	ft_atoi(const char	*str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = check_sign(str, i, 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (sign * result);
}
