#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*blst;

	while (*lst)
	{
		blst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = blst;
	}
}
