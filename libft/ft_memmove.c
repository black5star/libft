
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (d < s)
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else if (d > s)
	{
		d += len;
		s += len;
		while (len > 0)
		{
			*(--d) = *(--s);
			len--;
		}
	}
	return (dst);
}
