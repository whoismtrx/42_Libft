/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:15:39 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/20 20:26:39 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;

	if (!dst && !src)
		return (0);
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			ptr1[len] = ptr2[len];
	return (ptr1);
}
