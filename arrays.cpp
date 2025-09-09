#include<iostream>
#include<random>
#include<string>
#include<array>
#include<vector>
#include<deque>
#include<fstream>



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


void print_string(std::string list1[], int size){
    for(int i=0 ; i < size ; i++){ 
        list1[i] = "pie";
        std::cout<< list1[i] << std::endl;
    }
    std::cout << std::endl;
}
void printSTDarrays(std::array<std::string, 10> item){
    for(int i =0; i<item.size(); i++){
        item[i] = "pie mhhhh";
        std::cout << item[i] << std::endl;
    }
    std::cout << std::endl;
}       

void printVector(std::vector<std::string> item){
    std::cout << &item << std::endl;
    for(int i =0; i<item.size(); i++){
        item[i] = "CAR";
        std::cout << item[i] << std::endl;
    }
    std::cout << std::endl;
}


int main(){
    std::string food[3] = {"grapes", "carrots", "lemons"};
    
    std::array<std::string, 10> more = {"grapes", "carrots", "lemons", "apples", "bananas",
                                        "oranges", "tomatoes", "potatoes", "pears", "strawberries"};
    
    //no need to specify the size !!
    std::vector<std::string> brands;
    brands = {"Toyota", "BMW", "Mercedes", "Audi", "Ford", "Honda",
                "Nissan", "Volkswagen", "Porsche", "Ferrari"};
    brands.push_back("lancia"); //add string on back

    std::deque<std::string> food2 = {"cherries", "peaches", "plums", "mangoes", "kiwis", "cucumbers",
                                        "zucchinis", "pumpkins", "blueberries", "raspberries"};
    food2.push_back("lettuce");           
    food2.push_front("cheese");
    
    std::cout << std::endl;
    print_string(food, 3); //BECAUSE STRING: not food.size() but sizeof(food)/sizeof(food[0])
    std::cout << food << std::endl;
    for(int i = 0; i<3;i++){
        std::cout<<food[i]<<std::endl;
    }
    std::cout<<std::endl;
    printSTDarrays(more);
    printVector(brands);
    
    std::cout << &more << std::endl;
    std::cout << &brands << std::endl;
    for(auto i: brands){
        std::cout<<i<<std::endl;
    }


    std::cout<<std::endl;
    std::cout<<"==========new_tests=================================="<<std::endl;
    print(food, 3);
    print(more);
    print(brands); // or + brands.size() for the size.
    std::cout<<"==========deque============"<<std::endl;
    print(food2);
    return 0;
}