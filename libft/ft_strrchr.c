
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			ptr = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		ptr = s;
	}
	return ((char *)ptr);
}
