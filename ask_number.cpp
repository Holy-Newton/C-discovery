#include<iostream>
#include<string>
#include<cstdlib>

bool playGame(int guesse){
    srand(time(NULL));
    std::cout << "Playing Game..\n";
    std::cout << "Guess the number between 0 and 100\n";
    int correct = rand() % 20 ;
    int guess;
    while(guesse != 0){

        std::cout <<guesse << " try left \n";
        std::cin >> guess;

        if(guess == correct){
            return true;
        }
        else{
            if(guess > correct){
                std::cout << "to high\n";
            }
            else{
                std::cout << "to low\n";
            }
        }
        guesse -= 1;
    }
    return false;
}

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
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //empty the buffer !!!
        std::cout << "Difficulty :\n 0: easy\n 1: medium\n 2: hard \n";
        int diff;
        bool won;
        std::cin >> diff;

        switch(diff){
            
            case 0 : //easy
                won = playGame(10);
                break;
            case 1 : //medium
                won = playGame(6);
                break;
            case 2 : //hard
                won = playGame(3);
                break;
            default:
                std::cout << response << "What ????\n";
                break;
        }
        if(won){
            std::cout << "You WOOOOOON !!!!";
        }
        else{
            std::cout<< "LOOOOOOSEEEER !!!!";
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

