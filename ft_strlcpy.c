/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:54:42 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/17 15:48:44 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (0);
	while (i < n)
	{
		if (src[i]){
		dst[i] = src[i];
		i++;
		}
		else
		{
			dst[i] = 0;
			i++;
		}
	}

	dst[i] = '\0';
	return (i + 1);
}
