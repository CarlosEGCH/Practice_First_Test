#include <iostream>
#include <string>

//Day 2

//Calculate the area of any rectangle given it's height and width
/*

float rectangle(float height, float width){
    return height*width;
}


//Calculate the factorials from 1 to 10

double factorial(int n){
    if(n == 0) return 1;
    else return n*factorial(n-1);
}

void factorial_list(int n){

    for(int i = 0; i <= n; i++){
        std::cout << i << "! = " << factorial(i) << std::endl;
    }
}

//Day 3

//Function that receives a number and shows the even values until that number

void even_list(int n){
    int i = 0;
    while(i <= n){
        if(i%2 == 0){
            std::cout << i << std::endl;
        }
        i++;
    }
}

//Function that shows the values of an array in the opposite order

void opposite_array(int* array, int length){
    while(length > 0){
        std::cout << array[length-1] << "|";
        length--;
    }
}

//Function that calculates the average of the elements in the diagonal of a matrix

int avg_matrix(int dim, int* mat[]){
    int res = 0;
    int den = dim;
    while(dim > 0){
        res += mat[dim-1][dim-1];
        dim--;
    }
    return res/den;
}

//Day 5

//Create a function that calculates the average of the values of a linked list's values

struct node{
    int data;
    node* next;
};

//Day 6

//Create a linked list that represents a queue of people

struct Queue{
    struct Item{
        std::string name;
        Item* next;
    };
    Item* Qstart;
};

void addItemQueue(Queue& q,Queue::Item* item){
    if(q.Qstart == nullptr) {
        q.Qstart->next = item;
        item->next = nullptr;
    }
    else {
        item->next = q.Qstart;
        q.Qstart = item;
    }
}


void deleteItemQueue(Queue& q){
    if(q.Qstart->next == nullptr){
        delete q.Qstart->next;
        q.Qstart->next == nullptr;
        std::cout << "double element list\n";
    }
    else{
        Queue::Item* aux = q.Qstart;
        while(aux->next->next != nullptr){
            aux = aux -> next;
        }
        delete aux -> next;
        aux->next = nullptr;
    }
}

//More exercises

//Function that takes a string and replaces swaps the other characters introduced

std::string doubleSwap(std::string s, char c1, char c2) {
    char *c = &s[0];
    while (*c != '\0') {
        if (*c == c1) {
            *c = c2;
            c++;
        } else if (*c == c2) {
            *c = c1;
            c++;
        } else {
            c++;
        }
    }
    return s;
}

//Function that uncensors a string given the letters in order

std::string uncensor(std::string str, std::string vowels) {
    char* s = new char;
    s = &str[0];

    char* c = new char;
    c = &vowels[0];
    while(*s != '\0'){
        if(*s == '*'){
            *s = *c;
            c++;
        }
        s++;
    }
    return str;
}
*/

//Funcion para calcular el numero de pasajeros restantes de una parada (capacidad del bus es 50 pasajeros)

int parada(int personas_en_la_parada){
    if(personas_en_la_parada >= 50){
        personas_en_la_parada = personas_en_la_parada - 50;
    }
    else{
        std::cout << "El numero de personas que el ultimo autobus llevara es: ";
        return personas_en_la_parada;
    }
}






#include "SuperEDA.h"

int main(int personas_en_la_parada){
    if(personas_en_la_parada >= 50){
        personas_en_la_parada = personas_en_la_parada - 50;
    }
    else{
        std::cout << "El numero de personas que el ultimo autobus llevara es: ";
        return personas_en_la_parada;
    }
}
