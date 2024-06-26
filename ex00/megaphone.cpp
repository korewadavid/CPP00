/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:20:27 by damendez          #+#    #+#             */
/*   Updated: 2024/05/13 14:35:54 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Megaphone -> write a program that behaves as follows:
 * 
 * $>./megaphone "shhhhh... I think the students are asleep..."
 * SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
 * $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
 * DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
 * $>./megaphone
 * * LOUD AND UNBEARABLE FEEDBACK NOISE *
 * $>
*/

/*
 * 1. Check user input
 * 2. Use strlen() and toupper() for strings when theres correct input
*/

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int     i;
    size_t  j;

    if (argc > 1)
    {
        i = 0;
        while (argv[++i])
        {
            j = -1;
            while (++j < strlen(argv[i]))
                std::cout << (char)toupper(argv[i][j]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}