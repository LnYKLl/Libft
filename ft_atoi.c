/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:17:23 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/16 10:49:13 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int	i;
	int	v;
	int	s;

	i = 0;
	v = 0;
	s = 1;
	while (src[i] == ' ' || src[i] == '\t' || src[i] == '\r' || src[i] == '\n'
		|| src[i] == '\v' || src[i] == '\f')
		i++;
	if (src[i] == '-')
	{
		s *= -1;
		i++;
	}
	if (src[i] == '+')
		i++;
	while (src[i] >= '0' && src[i] <= '9')
	{
		v = v * 10 + src[i] - '0';
		i++;
	}
	v = v * s;
	return (v);
}
/*
int	main(void)
{
	printf("Value : %d", ft_atoi("      -329987"));
}
*/