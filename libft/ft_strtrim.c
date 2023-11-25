
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!set || !s1)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end != 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr((char *)s1, 0, end + 1));
}
