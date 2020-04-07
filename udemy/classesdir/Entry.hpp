#include<iostream>
#ifndef ENTRY_H_
#define ENTRY_H_
class Entry{
    
    public:
        static int regno;       //To demonstrate use of static variables
   
        Entry();
        Entry(int start);
        void input();
        int n;

        
        int *pAge=NULL;
        std::string *pName=NULL;

};
#endif