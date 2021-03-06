#pragma once

#include <vector>
#include <iostream>
#include "include/Stocznia.hpp"
unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    Stocznia stocznia{};
    std::vector< Statek* > myShips;
    //Statek*  s1 = stocznia();
    //std::cout << "towar = " << towar << std::endl;
    //std::cout << "Stocznia::getTotalCap() = " << Stocznia::getTotalCap() << std::endl << std::endl;
    unsigned int zaladowanie = 0;
    for (int i = 1; towar >= zaladowanie; i++) {
        Statek* s = stocznia();
				zaladowanie = zaladowanie + s->transportuj();
        myShips.push_back(s);
        //std::cout << "Statek nr " << i;
        Statek* czyZaglowiec = dynamic_cast< Zaglowiec* >(s);
        Statek* czyTankowiec = dynamic_cast< Tankowiec* >(s);
        if (czyZaglowiec){}//{std::cout << "\tto Zaglowiec!";}
        if (czyTankowiec){}//{std::cout << "\tto Tankowiec!";}
        //unsigned int capac = myShips[i]->transportuj();
        //std::cout << " Capacity: " << capac;
        //std::cout << " Stocznia::getTotalCap() = " << Stocznia::getTotalCap() << "\n";
				//delete s;
    }
    unsigned int zaglowce = CountThis< Zaglowiec >::get();
    //std::cout << "Zaglowce: " << zaglowce << "\n";
    //myShips.clear();
    return zaglowce;
}
