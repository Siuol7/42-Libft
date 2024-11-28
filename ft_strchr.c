/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:47:56 by caonguye          #+#    #+#             */
/*   Updated: 2024/11/25 22:27:47 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	val;
	size_t	i;

	i = 0;
	val = (char)c;
	while (s[i])
	{
		if (s[i] == val)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == val)
		return ((char *)&s[i]);
	return (NULL);
}