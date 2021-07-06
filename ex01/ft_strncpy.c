/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:34:13 by avachero          #+#    #+#             */
/*   Updated: 2021/07/04 14:37:44 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, insigmed int n)
{
	unisgned int a;
	
	i -= n;

	while(++a < n && src[a])
		dest[a] = src[a];
	while(i < n)
		dest[a] = '\0';
	return (dest);
}	
