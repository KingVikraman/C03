/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:44:35 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/12 21:24:00 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
/* 
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);

    ft_strcat(dest, src,5);

    printf("After concatenation: %s\n", dest);

    return (0);
}
*/
