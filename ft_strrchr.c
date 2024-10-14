/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:31:09 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 16:56:22 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			k = i;
		i++;
	}
	return ((char *)s + k);
}
/*
int	main(void)
{
	char *s = "Vincecnt";
	char c = 'c';
	char *p = ft_strrchr(s, c);
	printf("Value : %s", p);}
*/