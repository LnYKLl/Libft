/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:28:56 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 12:34:26 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*t;

	i = 0;
	while (s[i])
		i++;
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
/*
int	main(void)
{
	char *s = "Hello, World!";
	char *t = ft_strdup(s);
	printf("%s\n", t);
	return (0);
}
*/