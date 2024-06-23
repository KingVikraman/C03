/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:45:05 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 20:52:24 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	r;
	unsigned int	v;

	r = 0;
	v = 0;
	while (dest[r] != '\0')
		r++;
	while (src[v] != '\0' && v < nb)
	{
		dest[r] = src[v];
		r++;
		v++;
	}
	dest[r] = '\0';
	return (dest);
}
/*
int main()
{
	char a[20] = "Raja";
	char b[20] = " Vikram!";

	char *t = ft_strncat(a, b, 8);
	printf("%s\n", t);
	return (0);
}
*/
