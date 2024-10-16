/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:53:15 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 10:48:31 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < n)
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < n)
		{
			if (little[k + 1] == '\0')
				return ((char *)big + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s;
	char	*p;

	s = "Coucou Je suis la";
	p = "";
	printf("Value : %s", ft_strnstr(s, p, 8));
}
*/