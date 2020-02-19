#include <iostream>
#include <fstream>
#include <vector>

int main() {

    std::ifstream  file("C:\\Users\\rasah_s2z0ncs\\CLionProjects\\untitled10\\data.txt");
    if(file.good()){
        char ch;
      file.seekg(0, std::ios::end);
      auto size = file.tellg();
      std::cout << "DG " << size << "\n";
      file.seekg(0,std::ios::beg);
       std::vector<char> puffer(size);
       file.read(puffer.data(),size);
       std::cout<< "gelesen: " << file.gcount() << "\n";
        std::cout<< "text: " << puffer.data();
    }
}
