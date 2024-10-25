/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:09:15 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/25 14:51:44 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	char			*f;

	i = ft_strlen((char *)s);
	k = 0;
	if (!s || len == 0 || start > i)
		return (ft_strdup(""));
	if ((size_t)start + len > i)
		len = i - start;
	f = malloc(len + 1 * sizeof(char));
	if (!f)
	{
		return (NULL);
	}
	while ((size_t)k < len)
	{
		f[k] = s[start + k];
		k++;
	}
	f[k] = '\0';
	return (f);
}
