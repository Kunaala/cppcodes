#include<iostream>
#include "Entry.hpp"

std::string* Entry::input()
{
    
    std::cout<<"enter the number of entries\n";
    std::cin>>n;
    std::cout<<"enter the students name <space> age\n";
    std::string name[n];
    int age[n];

    for (int i=0;i<n;i++)
    {
         std::cin>>name[i]>>age[i];
    }
   
    this->pAge=age;
    this->pName=name;
    std::cout<<"NAME:"<<" "<<"AGE"<<std::endl;
    for (int i=0;i<n;i++,this->pAge++,this->pName++)
    {
         std::cout<<*(this->pName)<<" : "<<*(this->pAge)<<std::endl;
    }
}
