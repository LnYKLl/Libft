/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:06:32 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 08:43:46 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;

    if ( n == 0)
        return (0);
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return(((unsigned char *)s1)[i] - ((unsigned char*)s2)[i]);
        i++;
    }
    return (0);
}
/*
int main(void)
{
    char *s = "Coucou";
    char *p = "Coupou";

    printf("Value : %d", ft_memcp(s, p, 6));
}
*/