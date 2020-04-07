#include<iostream>
#include "Entry.hpp"
int Entry::regno=1;           // static variables must be declared in the cpp file of the class

Entry::Entry()
{
     std::cout<<"registration number starts from "<<Entry::regno<<std::endl;
}

Entry::Entry(int start)
{
     Entry::regno=start;
     std::cout<<"registration number starts from "<<Entry::regno<<std::endl;              // To demonstarte constructor overloading

}
void Entry::input()
{
    
    std::cout<<"enter the number of entries\n";
    std::cin>>n;
    std::cout<<"enter the students name <space> age\n";
    std::string name[n];
    int age[n];
    for (int i=0;i<n;i++)                                             //input loop for entries
    {
         std::cin>>name[i]>>age[i];
    }
   
    this->pAge=age;                                    //To demonstrate use of this pointer
    this->pName=name;                                  //and to demonstrate object member access through it
    std::cout<<"REGNO"<<":"<<"NAME:"<<" "<<"AGE"<<std::endl;
     
    for (int i=0;i<n;i++,this->pAge++,this->pName++,Entry::regno++)   //output loop using pointer arithmetic
    {
         std::cout<<Entry::regno<<":"<<*(this->pName)<<" : "<<*(this->pAge)<<std::endl;
    }
}
