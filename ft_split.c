/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:52:05 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/29 14:16:55 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static char	**ft_freemem(char **words, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

static char	**ft_putwords(char const *s, char **words, char c)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len = ft_wordlen(&s[i], c);
			words[j] = (char *)ft_calloc(word_len + 1, sizeof(char));
			if (!words[j])
				return (ft_freemem(words, j));
			ft_strlcpy(words[j], &s[i], word_len + 1);
			j++;
			i += word_len;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (!words)
		return (NULL);
	return (ft_putwords(s, words, c));
}
