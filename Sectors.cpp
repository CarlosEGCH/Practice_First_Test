#include "ficheiros.h"
#include <iostream>
#include "Sectors.h"





Sector* Initialize_Sectors(int& MAX_SECTORS, std::string* areas, int MAX_AREAS){
    auto* sector = new Sector[MAX_SECTORS];
    auto* products = new Product;
    int index = 0;
    while(index < MAX_SECTORS){
        sector->id = 65 + index;
        std::cout << "Introduzir nome do encarregado: \n";
        std::cin >> sector->owner;
        sector->area = areas[random_number(MAX_AREAS)];
        sector->products = products;
        sector->amount_products = 0;
        sector->capacity = random_number(10)+1;
        sector->income = 0;
        index++;
    }
    return sector;
}