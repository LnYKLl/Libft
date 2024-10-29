/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:17:23 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/29 13:55:28 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int		i;
	long	v;
	int		s;
	long	tmp;

	i = 0;
	v = 0;
	s = 1;
	while (src[i] == ' ' || (src[i] <= 13 && src[i] >= 9))
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i++] == '-')
			s *= -1;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		tmp = v;
		v = v * 10 + src[i++] - '0';
		if (tmp > v && s == 1)
			return (-1);
		if (tmp > v && s == -1)
			return (0);
	}
	return (v * s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "4294967285";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
*/