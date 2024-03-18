/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:02:04 by orekabe           #+#    #+#             */
/*   Updated: 2021/12/02 16:55:09 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_start(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] && set[j])
	{
		if (str[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (i);
}

static	int	ft_check_end(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(str);
	j = 0;
	while (set[j])
	{
		if (str[i - 1] == set[j])
		{
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (i);
}

static	char	*ft_store_str(char *ptr, const char *str, int start, int end)
{
	int	i;

	i = 0;
	while (str[start] && start < end)
	{
		ptr[i] = str[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set);
	if (start > end)
	{
		ptr = (char *)malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	else
	{
		ptr = (char *)malloc((end - start + 1) * sizeof(char));
		if (!(ptr))
			return (NULL);
		ptr = ft_store_str(ptr, s1, start, end);
		return (ptr);
	}
}
