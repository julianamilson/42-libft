/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:27:48 by jmilson-          #+#    #+#             */
/*   Updated: 2021/09/16 23:00:39 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size > len + 1)
		ft_memmove(dest, src, len + 1);
	else if (size != 0)
	{
		ft_memmove(dest, src, size);
		dest[size - 1] = 0;
	}
	return (len);
}
