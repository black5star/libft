
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	next_node = *lst;
	if (next_node && del)
	{
		while (next_node)
		{
			next_node = next_node->next;
			ft_lstdelone(*lst, del);
			*lst = next_node;
		}
		*lst = NULL;
	}
}
