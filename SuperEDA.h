#ifndef PRACTICE_FIRST_TEST_SUPEREDA_H
#define PRACTICE_FIRST_TEST_SUPEREDA_H

#include "Sectors.h"
#include "ficheiros.h"

struct SuperEDA{
    Product* storage;
    Sector* sectors;
    int amount_sectors;
};

SuperEDA* Initialize_SuperEDA();

#endif //PRACTICE_FIRST_TEST_SUPEREDA_H