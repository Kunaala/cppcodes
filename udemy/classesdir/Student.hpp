#ifndef STUDENT_HPP_
#define STUDENT_HPP_

#include<iostream>

class Student{
    public:
        int age;
        Student();
        Student(int age);
        
        std::string inputname();
    private:
        int regno=1;

};
#endif