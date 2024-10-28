/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:17:23 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/28 13:00:06 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int	i;
	int v;
	int	s;

	i = 0;
	v = 0;
	s = 1;
	while (src[i] == ' ' || (src[i] <= 13 && src[i] >= 9))
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			s *= -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		v = v * 10 + src[i] - '0';
		i++;
		if (v * s > 2147483647)
			return (-1);
		if (v * s < -2147483648)
			return (0);
	}
	return (v = v * s);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("+2147483647"));
	printf("%d\n", atoi("+2147483647"));
}