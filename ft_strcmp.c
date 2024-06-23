/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:38:45 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/12 21:14:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	r;

	r = 0;
	while (s1[r] == s2[r] && s1[r] != '\0' && s2[r] != '\0')
		r++;
	return (s1[r] - s2[r]);
}
/*
int main ()
{
	printf ("%d" ,ft_strcmp("rajav","raja"));
	return (0);	

}
*/
