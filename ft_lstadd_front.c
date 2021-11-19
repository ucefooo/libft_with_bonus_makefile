/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:34:36 by youssama          #+#    #+#             */
/*   Updated: 2021/11/13 00:40:15 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list
void aff(t_list **k)
{
    if (*k == NULL)
    printf("\nNULL\n");
    t_list *p;
    p = *k;
    while(p != NULL)
    {
       printf("%s\n",p->content);
       p = p -> next; 
    }
}
*/
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new -> next = *alst;
	*alst = new;
}
/*void del(void *l)
{
t_list *p;
p = l;
while (p != NULL)
{
    p -> content = NULL;
    p = p -> next;
}
}
void add(void *p)
{
   t_list *k;
   k = p;
    k -> content = "1111";
}
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *p;
    p = lst;
    while (p != NULL)
    {
        f(p);
        p = p -> next;
    }
}
int main(){
t_list *l,*n1,*n2,*n3,*n4;
t_list *p;
t_list **k;
t_list *j;
k = &l;
l = ft_lstnew("hello");
//printf("%s\t%s\n",l->content,l->next);
p = ft_lstnew("kas hhaosi");
l -> next = p;
//printf("%s\t%s\n",p->content,p->next);
j = ft_lstnew("hesliknki");
ft_lstadd_front(k,j);
n1 = ft_lstnew("1hesliknki");
n2 = ft_lstnew("2hesliknki");
n3 = ft_lstnew("3hesliknki");
n4 = ft_lstnew("last");
ft_lstadd_front(k,n1);
ft_lstadd_front(k,n2);
ft_lstadd_front(k,n3);
aff(k);
ft_lstiter(*k,add);
aff(k);
//ft_lstclear(k,del);
//printf("\n%s",(*k));
//aff(k);
//printf("\n");
//printf("\n%d",ft_lstsize((*k)));
//printf("\n%s",ft_lstlast(*k)->content);
//ft_lstadd_back(k,n4);
//aff(k);

}*/
