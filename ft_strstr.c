/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:45:45 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/13 22:11:53 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		len;
	char	*hay;

	hay = str;
	len = (ft_strlen(to_find));
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*hay != '\0')
	{
		if ((ft_strncmp(hay, to_find, len)))
		{
			return (hay);
		}
		hay++;
	}
	return (NULL);
}
