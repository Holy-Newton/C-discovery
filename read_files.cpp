#include<iostream>
#include<random>
#include<string>
#include<array>
#include<vector>
#include<deque>
#include<fstream>
using namespace std;

template<typename T> // some type we will c all T
void print(T item, int size){
    for(int i=0; i< size; i++){
        std::cout<<item[i]<<std::endl;
    }
}

template<typename T> // repeate after each call
void print(T item){
    for(auto i: item){
        std::cout<<i<<std::endl;
    }
    }


int main(){
    cout<<"There are the actual items:"<<endl;
    deque<string> foods;
    ifstream file("items.txt");
    string food;
    int number_items=0;
    while(file >> food){
        number_items+=1;
        foods.push_back(food);
    }
    print(foods);

    cout<<"There are "<<number_items<<" items"<<endl;

    cout<<"Add an item or enter ENTER to cancel."<<endl;
    string new_item;
    cin>>new_item;

    
    if(new_item.empty()){
        cout<<"No item added, see you later"<<endl;
    }
    else{
        ofstream file_out("items.txt",ios::app);
        file_out << new_item << endl;
        cout<<new_item<< " is now in the list !"<< endl;
        file_out.close();
    }
    
    


    
    string text = R"(cout<<"what do you whant to eat ?"<<endl;
    string item;
    cin >> item;
    ofstream file("items.txt"); // ofstr.. for input
    file << item;
    cout<<item<<" added to file items.txt"<<endl;
    file.close();
    ifstream file("items.txt");  // ifstr.. for ouput
    string item_eated; 
    file >> item_eated;
    cout<<"You eated "<<item_eated<<endl;
    file.close();
    )";


    return 0;
}