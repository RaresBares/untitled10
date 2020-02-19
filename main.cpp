#include <iostream>
#include <fstream>
int main() {

    std::ifstream  file("data.txt");
    if(file.good()){
        while(!file.eof()){
            char *st;
           file.getline(st,10);
           std::cout << st;
           st = "";
        }
    }
}
