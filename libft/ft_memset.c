
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buff;
	unsigned char	value;
	size_t			i;

	buff = (unsigned char *)b;
	value = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		buff[i] = value;
		i++;
	}
	return ((void *)buff);
}
