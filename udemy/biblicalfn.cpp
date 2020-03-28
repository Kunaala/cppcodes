#include<iostream>
#include "biblicalfn.hpp"
/*
void printoptions(int op)
{
    switch (op)
    {
        case 1:
            std::cout<<"you have \"1\" life\n";
            break;
        case 2:
            std::cout<<"Life is about a  \"2nd\" chance\n";
            break;
        case 3:
            std::cout<<"Believe in the \"Tri\"nity\n";
            break;
        case 4:
            std::cout<<"Beware of the \"4th\" horsemen\n";
            break;
        default:
            std::cout<<"nothing creates a possibility of everything\n";
    }
}

void inputfunc()
{
    std::cout<<"enter your option 1 or 2 or 3 or 4\n";
    int op;
    std::cin>>op;
    printoptions(op);
}
*/


//


void printoptions()
{   

    int op;
    op = inputfunc();
    switch (op)
    {
        case 1:
            std::cout<<"you have \"1\" life\n";
            break;
        case 2:
            std::cout<<"Life is about a  \"2nd\" chance\n";
            break;
        case 3:
            std::cout<<"Believe in the \"Tri\"nity\n";
            break;
        case 4:
            std::cout<<"Beware of the \"4th\" horsemen\n";
            break;
        default:
            std::cout<<"nothing creates a possibility of everything\n";
    }
}
int inputfunc()
{
    std::cout<<"enter your option 1 or 2 or 3 or 4\n";
    int op;
    std::cin>>op;
    return op;
}

int main()
{
    //inputfunc();
    printoptions();
}