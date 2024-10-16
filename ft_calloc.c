/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:37:30 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 12:20:33 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*t;
	int				i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	t = malloc(nmemb * size);
	i = 0;
	if (!t)
		return (NULL);
	while (i < nmemb * size)
	{
		t[i] = '0';
		i++;
	}
	return (t);
}
/*
int	main(void)
{
	char	*t;

	t = ft_calloc(8, 1);
	printf("Value : %s", t);
}
*/