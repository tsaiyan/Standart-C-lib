/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:18:09 by tsaiyan           #+#    #+#             */
/*   Updated: 2020/10/30 16:18:10 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while(len-- && *haystack)
	{
		if (*haystack == *needle)
			i++;
		if (!needle || !len)
			return ((char*)haystack);
		haystack++;
		needle++;
	}
	return (NULL);
}
