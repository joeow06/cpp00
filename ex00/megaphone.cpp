/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:19:18 by joeow             #+#    #+#             */
/*   Updated: 2025/10/08 22:40:37 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
    int j;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i  = 1; i < ac; i++)
        {
            j = 0;
            while (av[i][j])
                std::cout << (char)std::toupper(av[i][j++]);
        }
        std::cout << std::endl;
    }
    return (0);
}