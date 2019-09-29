#include<iostream>

namespace floater
{
    double value=10.3;
}
namespace integer
{
    int value;
    int valuedouble()
    {
       return  value=value*2;
    }
}
int main()
{   
    std::cout<<"enter value of integer value"<<"\n";
    std::cin>>integer::value;
    std::cout<<floater::value<<"\n";
    std::cout<<integer::valuedouble()<<"\n";
}