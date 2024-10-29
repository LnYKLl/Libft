/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:36:17 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/29 14:19:15 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				i;
	int				k;
	int				j;
	unsigned char	*t;

	i = ft_strlen((char *)s1);
	k = ft_strlen((char *)s2);
	j = 0;
	t = ft_calloc(i + k + 1, sizeof(char));
	if (!t)
		return (NULL);
	while (s1[j] != '\0')
	{
		t[j] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		t[i + j] = s2[j];
		j++;
	}
	t[i + j] = '\0';
	return ((char *)t);
}
