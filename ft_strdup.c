/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:28:56 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 15:47:15 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*t;

	i = ft_strlen(s);
	t = malloc(i);
	if (!t)
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = s[i];
		i++;
	}
	return (t);
}
