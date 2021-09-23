/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:57:09 by jmilson-          #+#    #+#             */
/*   Updated: 2021/09/10 14:30:50 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;
	size_t	i;

	i = number * size;
	ptr = malloc(i);
	if (!ptr || i < 0)
		return (NULL);
	ft_bzero(ptr, i);
	return (ptr);
}
