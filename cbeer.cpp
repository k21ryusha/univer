#include <iostream>
#include <string>

int main() {
    std::string password; 
    std::string etalon ("Cbeer");

    std:: cout << "Enter password: ";
    std:: cin >> password;

    if (password.size()!=etalon.size()){
        std::cout<<"wrong"<<std::endl;
            return -1;
    }  
    
    for(size_t i = 0; i < password.size() ; ++i){
        if (password[i]!=etalon[i]){
            std::cout<<"wrong"<<std::endl;
            return -1;
        }  
    }

    std:: cout << "TY MOLODETS"<<std::endl;
    return 0;

}