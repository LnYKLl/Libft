/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:54:42 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 14:14:54 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t n)
{
	size_t i;

	i = 0;
	
	if (!dst)
		return(0);
	
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}
/*
int main(void)
{
	char str[50] = "Coucouuuu";
	char str2[50] = "Coucouuuu";
	printf("Value : %lu\n", ft_strlcpy(str, "Hello", 3));
	printf("Value : %s\n", str);
	printf("Value : %lu\n", ft_strlcpy(str2, "Hello", 5));
	printf("Value : %s\n", str2);
}
*/