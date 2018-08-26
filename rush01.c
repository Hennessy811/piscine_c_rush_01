/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:25:12 by cskeleto          #+#    #+#             */
/*   Updated: 2018/08/26 16:26:22 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	firstline(int xi, int x)
{
	if (xi == 1)
		ft_putchar('/');
	else if (xi == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	midline(int xi, int x)
{
	if (xi == 1 || xi == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	lastline(int xi, int x)
{
	if (xi == 1)
		ft_putchar('\\');
	else if (xi == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int xi;
	int yi;

	yi = 1;
	while (yi <= y)
	{
		xi = 1;
		while (xi <= x)
		{
			if (yi == 1)
				firstline(xi, x);
			else if (yi == y)
				lastline(xi, x);
			else
				midline(xi, x);
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
