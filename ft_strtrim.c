/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:18:00 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/18 16:35:58 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	size_t	j;
	size_t	k;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	while (s1[j] && ft_trim(s1[j], set))
		j++;
	k = ft_strlen((char *)s1);
	while (k > j && ft_trim(s1[k - 1], set))
		k--;
	t = ft_calloc(sizeof(char), (k - j + 1));
	if (!t)
		return (NULL);
	i = 0;
	while (j < k)
		t[i++] = s1[j++];
	t[i] = '\0';
	return (t);
}
