/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:06:55 by orekabe           #+#    #+#             */
/*   Updated: 2021/11/30 16:40:26 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
		if (n >= -9 && n <= 9)
		{
			len++;
			return (len);
		}
	}
	return (0);
}

static	void	ft_conv_i_to_a(char *ptr, long n, int *i)
{
	if (n < 0)
		n *= -1;
	if (n <= 9)
	{
		ptr[*i] = n + 48;
		(*i)++;
	}
	else
	{
		ft_conv_i_to_a(ptr, n / 10, i);
		ft_conv_i_to_a(ptr, n % 10, i);
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	if (n < 0)
	{
		ptr = (char *)malloc((ft_count_len(n) + 2) * sizeof(char));
		if (!ptr)
			return (NULL);
		i = 1;
		ptr[0] = '-';
		ft_conv_i_to_a(ptr, n, &i);
	}
	else
	{
		ptr = (char *)malloc((ft_count_len(n) + 1) * sizeof(char));
		if (!ptr)
			return (NULL);
		ft_conv_i_to_a(ptr, n, &i);
	}
	ptr[i] = '\0';
	return (ptr);
}
