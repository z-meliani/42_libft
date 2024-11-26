/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:18:09 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/14 13:27:26 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if ((i != 0) && (((s[i] == c) && (s[i - 1] != c))
				|| ((s[i] != c) && (s[i + 1] == '\0'))))
			nb++;
		i++;
	}
	return (nb);
}

static void	free_index(size_t **index, size_t i)
{
	int	j;

	j = (int) i;
	while (j >= 0)
	{
		free(index[j]);
		j--;
	}
	free(index);
}

static size_t	**list_ind_words(char const *s, char c, size_t nb_words)
{
	size_t	**list;
	size_t	i_list;
	size_t	i;

	list = malloc(sizeof(size_t *) * (nb_words + 1));
	if (!list)
		return (free_index(list, nb_words), NULL);
	i_list = 0;
	i = 0;
	while (s[i] && i_list < nb_words)
	{
		list[i_list] = malloc(sizeof(size_t) * 3);
		if (!list[i_list])
			return (free_index(list, nb_words), NULL);
		while (s[i] == c)
			i++;
		list[i_list][0] = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		list[i_list][1] = i;
		list[i_list][2] = '\0';
		i_list++;
	}
	list[nb_words] = NULL;
	return (list);
}

static void	free_split(char **s_splited, size_t i)
{
	int	j;

	j = (int) i;
	while (j >= 0)
	{
		free(s_splited[j]);
		j--;
	}
	free(s_splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splt;
	size_t	**ind;
	size_t	nb_words;
	size_t	i;
	size_t	j;

	nb_words = count_words(s, c);
	ind = list_ind_words(s, c, nb_words);
	if (!ind)
		return (free_index(ind, nb_words), NULL);
	splt = malloc(sizeof(char *) * (nb_words + 1));
	if (!splt)
		return (free_split(splt, nb_words), NULL);
	i = -1;
	while (++i < nb_words)
	{
		j = ind[i][1] - ind[i][0];
		splt[i] = malloc(sizeof(char) * (j + 1));
		if (!splt[i])
			return (free_split(splt, nb_words), NULL);
		splt[i] = ft_memmove(splt[i], &s[ind[i][0]], j);
		splt[i][j] = '\0';
	}
	splt[nb_words] = NULL;
	return (free_index(ind, nb_words), splt);
}
