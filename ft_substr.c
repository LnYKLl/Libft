/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:09:15 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 13:57:12 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	char			*f;

	i = 0;
	k = 0;
	while (s[i])
		i++;
	if (i < start)
		return (NULL);
	if ((size_t)start + len > i)
		return (NULL);
	f = malloc(len + 1);
	while ((size_t)k < len)
	{
		f[k] = s[start + k];
		k++;
	}
	f[k] = '\0';
	return (f);
}
