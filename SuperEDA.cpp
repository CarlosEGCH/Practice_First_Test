#include <iostream>
#include "ficheiros.h"
#include "Sectors.h"
#include "SuperEDA.h"

SuperEDA Initialize_SuperEDA(std::string* names, std::string* suppliers, std::string* areas, int MAX_NAMES, int MAX_SUPPLIERS, int MAX_AREAS, int MAX_STORAGE){

    //Primeiro criar o armazem

    SuperEDA* supermercado = new SuperEDA;
    Product* storage = new Product[MAX_STORAGE];
    int amount_storage = 0;
    while(amount_storage < MAX_STORAGE){
        storage[amount_storage] = Initialize_Product(names, suppliers, areas, MAX_NAMES, MAX_SUPPLIERS, MAX_AREAS);
        amount_storage++;
    }
    supermercado->storage = storage;

    supermercado->amount_sectors = random_number(5)+8;


}