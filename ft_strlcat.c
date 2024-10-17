/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:15:17 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/17 17:03:26 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen((char *)src);
	
	if(i == n)
		return (i + j);
	if (i + j < n)
	ft_memcpy(dst + i, src, j - 1);
	return (i + j);
	
}

