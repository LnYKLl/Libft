/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:36:17 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 15:06:09 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				i;
	int				k;
	int				j;
	unsigned char	*t;

	i = ft_strlen(s1);
	k = ft_strlen(s2);
	j = 0;
	t = ft_calloc(i + k, sizeof(char));
	if (!t)
		return (NULL);
	while (s1[j])
	{
		t[j] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j])
	{
		t[i + j] = s2[j];
		j++;
	}
	t[i + j] = '\0';
	return (t);
}
