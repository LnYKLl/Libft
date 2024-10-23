/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:28:43 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/22 13:22:27 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (ds == sr || n == 0)
		return (dst);
	if (sr < ds)
	{
		while (n != 0)
		{
			n--;
			ds[n] = sr[n];
		}
	}
	else
	{
		while (n != 0)
		{
			*ds++ = *sr++;
			n--;
		}
	}
	return (dst);
}
