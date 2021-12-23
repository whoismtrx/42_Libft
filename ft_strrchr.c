/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:32:41 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/30 14:54:04 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	ch;

	i = ft_strlen(s);
	ptr = (char *)s;
	ch = (char)c;
	while (i >= 0)
	{
		if (ptr[i] == ch)
			return (ptr + i);
		i--;
	}
	return (NULL);
}
