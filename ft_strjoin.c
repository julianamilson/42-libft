/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:52:00 by jmilson-          #+#    #+#             */
/*   Updated: 2021/09/22 01:28:00 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sr;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sr = (char *)ft_calloc((len1 + len2 + 1), sizeof(char));
	if (sr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		sr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sr[i + j] = s2[j];
		j++;
	}
	return (sr);
}
