/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:58:42 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/14 12:50:14 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(char str);
int	ft_isalpha(char str);
int	ft_isascii(int i);
int	ft_isdigit(int i);
int	ft_isprint(int i);
int	ft_strlen(char *str);
void *ft_memset(void *b, int c, size_t n);
#endif