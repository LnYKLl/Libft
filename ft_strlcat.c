/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:15:17 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 16:56:44 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[k] != '\0' && k < n)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[50] = "Coucouuuu";
	char	str2[50] = "Coucouuuu";

	printf("Value : %lu\n", ft_strlcat(str, "Hello", 3));
	printf("Value : %s\n", str);
	printf("Value : %lu\n", ft_strlcat(str2, "Hello", 5));
	printf("Value : %s\n", str2);
}
*/