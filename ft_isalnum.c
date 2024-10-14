/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:39:09 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 12:43:52 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char str)
{
	if ((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z') || (str >= 'a'
			&& str <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Value : %d", ft_isalnum('0'));
}
*/