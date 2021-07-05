#include <iostream>
#include <string>
#include "leitura_ficheiros.h"
#include "ficheiros.h"
#include "Sectors.h"
#include "SuperEDA.h"

int MAX_STORAGE = 1000;
int MAX_AREAS = 16;
int MAX_SUPPLIERS = 15;
int MAX_NAMES = 100;

std::string* file_names = new std::string[MAX_NAMES];
std::string* file_suppliers = new std::string[MAX_SUPPLIERS];
std::string* file_areas = new std::string[MAX_AREAS];


SuperEDA* Initialize_SuperEDA(){

    //leitura de nomes
    read_files(file_names, R"(C:\Users\Carlo\OneDrive\Documentos\EDA\C++\Practice_First_Test\produtos.txt)");

    //leitura de fornecedores
    read_files(file_suppliers, R"(C:\Users\Carlo\OneDrive\Documentos\EDA\C++\Practice_First_Test\fornecedores.txt)");

    //leitura de areas
    read_files(file_areas, R"(C:\Users\Carlo\OneDrive\Documentos\EDA\C++\Practice_First_Test\areas.txt)");



    //Primeiro criar o armazem

    auto* supermercado = new SuperEDA;
    auto* storage = new Product[MAX_STORAGE];
    int amount_storage = 0;
    while(amount_storage < 20){
        storage[amount_storage] = *Initialize_Product(file_names, file_suppliers, file_areas, MAX_NAMES, MAX_SUPPLIERS, MAX_AREAS);
        std::cout << storage[amount_storage].name << " <-- Produto\n";
        amount_storage++;
    }

    supermercado->storage = storage;

    supermercado->amount_sectors = random_number(5)+8;

    int index = 0;
    supermercado->sectors = Initialize_Sectors(supermercado->amount_sectors,file_areas, MAX_AREAS);

    return supermercado;
}