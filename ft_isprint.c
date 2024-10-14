/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:17:25 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 12:44:00 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i < 32 || i > 126)
		return (0);
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Value : %d", ft_isprint(40));
}
*/