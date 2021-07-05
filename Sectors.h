#ifndef PRACTICE_FIRST_TEST_SECTORS_H
#define PRACTICE_FIRST_TEST_SECTORS_H
#include <string>
#include "ficheiros.h"


struct Sector{
    char id;
    std::string area;
    std::string owner;
    Product* products;
    int amount_products;
    int capacity;
    float income;
};

Sector* Initialize_Sectors(int& MAX_SECTORS, std::string* areas, int MAX_AREAS);

#endif //PRACTICE_FIRST_TEST_SECTORS_H
