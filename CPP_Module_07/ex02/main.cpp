/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:38:11 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:38:16 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main (void)
{
    Array<int> a1 = Array<int>(23);
    Array<int> a2 = Array<int>(a1);
    Array<int> a3 = Array<int>(800);
    std::cout << "Size:\n" << a1.size() << " - " << a2.size() << " - " << a3.size() << std::endl;
    a3 = a1;
    std::cout << "Size:\n" << a1.size() << " - " << a2.size() << " - " << a3.size() << std::endl;
    std::cout << a1[12] << std::endl;
    a1[12] = 123;
    std::cout << a1[12] << std::endl;
    std::cout << a2[12] << std::endl;
    a1.print();
    try
    {
        a3[600] = 12;
    }
    catch(const std::exception& e)
    {
        std::cout << "ERRORE LANCIATO" << std::endl;
    }
    return (0);
}
