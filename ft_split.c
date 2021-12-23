/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:18:48 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/30 17:40:26 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**free_split(char **ptr)
{
	int	i;

	if (!ptr)
	{
		i = 0;
		while (ptr[i])
			free (ptr[i]);
		free(ptr);
	}
	return (ptr);
}

static	size_t	ft_count_strings(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) && i != 0 && s[i + 1] != '\0')
			k++;
		i++;
	}
	return (k + 2);
}

static	char	*ft_allocate(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < i)
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

static	char	**ft_split_beta(char const *s, char c)
{
	int		i;
	int		j;
	int		boool;
	char	**ptr;

	i = -1;
	j = 0;
	boool = 1;
	ptr = (char **)malloc(ft_count_strings(s, c) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
		{
			if (boool)
				ptr[j++] = ft_allocate(s + i, c);
			boool = 0;
		}
		else
			boool = 1;
	}
	ptr[j] = NULL;
	return (free_split(ptr));
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = ft_split_beta(s, c);
	return (ptr);
}
