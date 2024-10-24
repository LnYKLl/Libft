/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:51:27 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:20:49 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;
    if (!*lst)
        *lst = new;
    else
    {
    tmp = ft_lstlast(*lst);
    tmp->next = new;
    }
}

/*
int main(void)
{
    t_list *ma_liste = NULL;
    t_list *nouvel_element;

    nouvel_element = ft_lstnew("Premier");
    ft_lstadd_back(&ma_liste, nouvel_element);

    nouvel_element = ft_lstnew("Deuxième");
    ft_lstadd_back(&ma_liste, nouvel_element);

    nouvel_element = ft_lstnew("Troisième");
    ft_lstadd_back(&ma_liste, nouvel_element);

    t_list *tmp = ma_liste;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
}
*/