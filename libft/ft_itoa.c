
#include <stdlib.h>
#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	i++;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	div_num(int n)
{
	int	divr;

	divr = 1;
	while ((n / divr) >= 10)
	{
		divr *= 10;
	}
	return (divr);
}

static char	*numtostr(char *s, int n, int i, int divr)
{
	if (n >= 0)
	{
		while (divr >= 1)
		{
			s[i] = (n / divr) + 48;
			n %= divr;
			divr /= 10;
			i++;
		}
	}
	else if (n < 0)
	{
		s[i] = '-';
		i++;
		n = (-n);
		while (divr >= 1)
		{
			s[i] = (n / divr) + 48;
			n %= divr;
			divr /= 10;
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			size;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	size = count_digit(n) + 1;
	s = (char *)malloc(size);
	if (!s)
		return (NULL);
	else if (n < 0)
		numtostr(s, n, 0, div_num(-n));
	else
		numtostr(s, n, 0, div_num(n));
	return (s);
}
