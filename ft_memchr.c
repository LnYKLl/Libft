/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 07:15:11 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 07:43:35 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;

    if (n <= 0 || !s)
        return (NULL);
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}
/*
int main(void)
{
    char str[] = "Hello World!";
    char *ptr;

    ptr = ft_memchr(str, 'W', 12);
    if (ptr)
        printf("Character found: %c\n", *ptr);
    else
        printf("Character not found\n");
    return (0);
}
*/