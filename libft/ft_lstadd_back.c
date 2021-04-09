#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*blst;

	if (!alst)
		return ;
	if (*alst)
	{
		blst = ft_lstlast(*alst);
		blst->next = new;
	}
	else
		*alst = new;
}
