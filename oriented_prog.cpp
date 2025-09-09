#include<iostream>
#include<random>
#include<string>
#include<array>
#include<vector>
#include<deque>
#include<fstream>
using namespace std;



class Food {
    public:
        string name;
        double cost;

        void print(){
            cout<<name<<"   "<<cost<<endl;
        }
};

int main(){

    Food food;
    food.name = "bananas";
    food.cost = 20.41;
    Food food1;
    food1.name = "coconuts";
    food1.cost = 5.32;
    //cout<< food.name <<"    "<<food.cost<<endl;
    food.print();
    food1.print();
    return 0;
}

