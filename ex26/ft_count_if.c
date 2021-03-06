/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:18:07 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/16 18:55:03 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
