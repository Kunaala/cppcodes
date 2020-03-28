#include<iostream>

int main()
{
    int nApples=5;
    int nOranges=3;
    std::string name;           //string declaration
    std::cout << "enter your name"<<std::flush;
    std::cin >> name;           //take input from user, store it in name of type std::string
    std::string dia = "fruits you have "; 
    std::string inter = "are ";
    int sum = nApples+nOranges;
    std::cout << name + dia + inter << std::endl;   //string concatenation
    std::cout << sum << std::endl;

}