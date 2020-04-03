#include<iostream>
#include "Student.hpp"

Student::Student(){
    age=18;
}
Student::Student(int age){
    this->age=age;
}

std::string Student::inputname()
{
    std::string name;
    std::cout<<"enter the Student's name >\n";
    std::cin>>name;
    return name;
    
}