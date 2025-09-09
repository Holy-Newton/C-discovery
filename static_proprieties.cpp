#include<iostream>
#include<string>
#include<vector>


void f() {
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

int main() {
    int x = 5;
    std::cout<<"variable dans main x avant fonction: "<<x<<std::endl;
    f(); // affiche 1
    f(); // affiche 2
    f(); // affiche 3
    std::cout<<"après fonction: "<<x<<std::endl;
}
