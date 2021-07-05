#include <iostream>
#include <string>
#include <fstream>
#include "leitura_ficheiros.h"

void read_files(std::string* lines, const std::string& path){
    std::fstream File;
    File.open(path);
    int index = 0;
    std::string aux;
    if(!File){
        std::cout << "Empty lines!";
    }
    while(std::getline(File, aux)){
        lines[index] = aux;
        index++;
    }
}