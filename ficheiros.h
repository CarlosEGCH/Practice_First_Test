#ifndef PRACTICE_FIRST_TEST_FICHEIROS_H
#define PRACTICE_FIRST_TEST_FICHEIROS_H
#include <string>

struct Product{
    std::string name;
    std::string supplier;
    std::string area;
    float price;
};

int random_number(int limit);

Product* Initialize_Product(std::string* names, std::string* suppliers, std::string* available_areas, int MAX_NAMES, int MAX_SUPPLIERS, int MAX_AREAS );

Product* Initialize_Storage(std::string* names, std::string* suppliers, std::string* available_areas, int MAX_STORAGE, int MAX_NAMES, int MAX_SUPPLIERS, int MAX_AREAS);

#endif //PRACTICE_FIRST_TEST_FICHEIROS_H
