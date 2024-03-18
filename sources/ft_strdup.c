/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:36:04 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/20 20:29:10 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s) + 1;
	ptr = (char *)malloc(i * sizeof(char));
	if (!(ptr))
		return (NULL);
	ptr[i] = '\0';
	while (--i >= 0)
		ptr[i] = s[i];
	return (ptr);
}
