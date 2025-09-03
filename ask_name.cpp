#include<iostream>
#include<string>

int main(){
    std::cout << "What is your name ?\n";
    std::string name;
    std::cin >> name;
    std::cout << "Hello World, and " << name << std::endl;
    std::cout << "Do you want to play a game ? (y/n)\n";
    std::string response;
    std::cin >> response;
    if(response[0] == "y"){ //yes
        std::cout << "ok let's play a game then " << name << " !!\n";
    }
    if(response == "n"){ //no
        std::cout << "Ok dumbass..." ;
    }
    return 0;
}