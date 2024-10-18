/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:54:42 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/18 11:21:58 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen((char *)src);
	j = 0;
	if (n > 0)
	{
		while (j < n - 1 && j != i)
		{
			(((unsigned char *)dst)[j]) = (((unsigned char *)src)[j]);
			j++;
		}
		(((unsigned char *)dst)[j]) = '\0';
		return (i);
	}
	else
		return (i);
}
