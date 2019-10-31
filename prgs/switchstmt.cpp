#include<iostream>

int main()
{   
    int n;
    std::cout<<"enter the value of n\n";
    std::cin>>n;
    switch(n)
    {
        case 1:
        {
            std::cout<<"value of n is 1\n";
            break;
        }
        case 2:
        {
            std::cout<<"value of n is 2\n";
            break;
        }
        default:
        {
            std::cout<<"value of n is neither 1 nor 2\n";
            
        }
    }
}