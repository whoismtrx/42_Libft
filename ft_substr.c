/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:23:36 by orekabe           #+#    #+#             */
/*   Updated: 2021/12/07 15:00:29 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = -1;
	j = -1;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) < len)
		ptr = (char *)malloc(((ft_strlen(s) - start) + 1) * sizeof(char));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	while (s[++i])
	{
		if (i == start)
			while (s[i + ++j] && j < len)
				ptr[j] = s[i + j];
		ptr[j] = '\0';
	}
	return (ptr);
}
