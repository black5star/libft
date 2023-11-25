
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (!d && !s)
		return ((void *)0);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
