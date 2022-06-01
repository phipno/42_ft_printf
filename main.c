/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:46:19 by pnolte            #+#    #+#             */
/*   Updated: 2022/06/01 11:52:39 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	count = 0;
	int	*p = malloc(5);

	count = ft_printf("Mine: Character||%c||, String||%s||, Pointer||%p||, Decimal||%d||\n      Integer||%i||, Unsigned Decimal||%u||, HexadecimalLCF||%x||\n      HexadecimalUCF||%X|, Percent||%%||\n", 'a', "Test", &p, 2567, 233, 230, 23132232, 23132232);
	ft_printf("      Count mine: %d\n", count);
	count = printf("Orig: Character||%c||, String||%s||, Pointer||%p||, Decimal||%d||\n      Integer||%i||, Unsigned Decimal||%u||, HexadecimalLCF||%x||\n      HexadecimalUCF||%X|, Percent||%%||\n", 'a', "Test", &p, 2567, 233, 230, 23132232, 23132232);
	ft_printf("      Count Orig: %d\n", count);
	free(p);
}
