/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:54:50 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/20 20:30:49 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)haystack;
	ptr2 = (char *)needle;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (ptr1[i] && ft_strlen(ptr2) + i <= len)
	{
		if (ft_strncmp(ptr1 + i, ptr2, ft_strlen(ptr2)) == 0)
			return (ptr1 + i);
		i++;
	}
	return (NULL);
}
