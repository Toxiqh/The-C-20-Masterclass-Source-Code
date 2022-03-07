#include <iostream>
#include <string>

int main(){

    std::string city;
    std::cout << "Where do you live?" << std::endl;
    std::cin >> city;

    std::cout << "I've heard great things about " << city << ". I'd like to go sometime.";
 
    return 0;
}