#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ficheiros.h"


int random_number(int limit){
    srand(time(0));
    return rand()%limit;
}

Product Initialize_Product(std::string* names, std::string* suppliers, std::string* available_areas, int& MAX_NAMES, int& MAX_SUPPLIERS, int& MAX_AREAS){
    auto* product = new Product;
    product->name = names[random_number(MAX_NAMES)];
    product->supplier = suppliers[random_number(MAX_SUPPLIERS)];
    product->area = available_areas[random_number(MAX_AREAS)];
    while(true) {
        product->price = random_number(80) + 1;
        if((int)product->price % 2 == 0) break;
    }
}


//Criar armazém. Corresponde a uma lista de produtos

Product* Initialize_Storage(int MAX_STORAGE, std::string* names, std::string* suppliers, std::string* available_areas, int& MAX_NAMES, int& MAX_SUPPLIERS, int& MAX_AREAS){
    auto* storage = new Product[MAX_STORAGE];
    int i = 0;
    while(i < 50){
        storage[i] = Initialize_Product(names, suppliers, available_areas, MAX_NAMES, MAX_SUPPLIERS, MAX_AREAS);
        i++;
    }
    return storage;
}