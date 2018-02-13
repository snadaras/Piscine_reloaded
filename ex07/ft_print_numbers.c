/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:11:47 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/16 18:28:27 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;
	int		i;

	i = 0;
	number = '0';
	while (i <= 9)
	{
		ft_putchar(number);
		number++;
		i++;
	}
}
