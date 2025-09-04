#include<iostream>
#include<random>
#include<string>
#include<array>
#include<vector>

int main(){
    std::string food[] = {"grapes", "carrots", "lemons"};
    
    std::array<std::string, 10> more = {"grapes", "carrots", 
        "lemons", "apples", "bananas", "oranges", "tomatoes", "potatoes", "pears", "strawberries"};
    
    //no need to specify the size !!
    std::vector<std::string> brands;
    brands = {"Toyota", "BMW", "Mercedes", "Audi", "Ford", "Honda",
         "Nissan", "Volkswagen", "Porsche", "Ferrari"};

    brands.push_back("lancia"); //add string on back
    

    for(int i=0 ; i < more.size() ; i++){ 
        std::cout<< more[i] << std::endl;
    }

    for(auto miam: more){ //or for(string miam: more){.   ==> same
        std::cout<<miam<<std::endl;
    }

    for(auto car: brands){
        std::cout<<car<<std::endl;
    }
    return 0;
}