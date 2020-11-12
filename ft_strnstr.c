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
	size_t n;

	i = 0;
	if (len <= 0 || !haystack)
		return (NULL);
	while (haystack[i])
	{
		if (!*needle)
			return ((char*)haystack);
		n = 0;
		if (haystack[i] == needle[n])
		{
			while (needle[n] && i < len)
			{
				if ((haystack[i] == needle[n]) && (i++ < len))
					n++;
				else
					break ;
			}
			if (!needle[n])
				return ((char *)&haystack[i - n]);
		}
		i -= n - 1;
	}
	return (NULL);
}
