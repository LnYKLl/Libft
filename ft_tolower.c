/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:01:28 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 16:56:07 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		i += 32;
	return (i);
}
/*
int	main(void)
{
	int		i;
	char	c;

	i = ft_tolower(65);
	c = (char)i;
	printf("Value : %c", c);
}
*/