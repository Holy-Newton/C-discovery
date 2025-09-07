#include<iostream>
#include<random>
#include<string>
#include<array>
#include<vector>

void print_string(std::string list1[], int size){
    for(int i=0 ; i < size ; i++){ 
        std::cout<< list1[i] << std::endl;
    }
    std::cout << std::endl;
}

void printSTDarrays(std::array<std::string, 10> item){
    for(int i =0; i<item.size(); i++){
        std::cout << item[i] << std::endl;
    }
    std::cout << std::endl;
}       

void printVector(std::vector<std::string> item){
    for(int i =0; i<item.size(); i++){
        std::cout << item[i] << std::endl;
    }
    std::cout << std::endl;
}



int main(){

    std::string food[3] = {"grapes", "carrots", "lemons"};
    
    std::array<std::string, 10> more = {"grapes", "carrots", 
        "lemons", "apples", "bananas", "oranges", "tomatoes", "potatoes", "pears", "strawberries"};
    
    //no need to specify the size !!
    std::vector<std::string> brands;
    brands = {"Toyota", "BMW", "Mercedes", "Audi", "Ford", "Honda",
         "Nissan", "Volkswagen", "Porsche", "Ferrari"};
    brands.push_back("lancia"); //add string on back


    std::cout << std::endl;
    print_string(food, 3); //BECAUSE STRING: not food.size() but sizeof(food)/sizeof(food[0])
    printSTDarrays(more);
    printVector(brands);
    
    std::cout << food << std::endl;
    std::cout << &more << std::endl;
    std::cout << &brands << std::endl;
    return 0;
}