#include<iostream>
#include<string>


int main(){
    //Catch the name==========================
    std::cout << "What is your name ?\n";
    std::string name;
    std::cin >> name;
    std::cout << "Hello World, and " << name << std::endl;

    //Game section============================
    std::cout << "Do you want to play a game ?\n";
    //empty the buffer !!!
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //empty the buffer !!!
    char response = tolower(getchar());

    if(response == 'y' or response == 'o'){ //yes
        std::cout << "Ok let's play a game then " << name << " !!\n";

        std::cout << "Difficulty easy, medium, hard ? \n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //empty the buffer !!!
        std::string diff;
        std::cin >> diff;
        if(diff == "easy"){
            std::cout << "he what a girl..";
        }
        else if(diff == "medium"){
            std::cout << "yeah okay";
        }
        else if(diff == "hard"){
            std::cout << "that's my boy";
        }
        else{
            std::cout<< "stupid guy, you now how to read ???";
        }
    }

    else if(response=='n'){ //no
        std::cout << "Ok dumbass...\n" ;
    }
    else {
        std::cout << "Bro.. say 'yes', 'ok' or 'no' or somthing like that, didn't understood...\n ";
    }

    return 0;
}