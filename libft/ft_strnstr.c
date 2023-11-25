
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
			{
				return (str + i);
			}	
		}
		i++;
	}
	return (NULL);
}
