#include<iostream>

int main(int argc,char *argv[])
{
    std::cout<<argc<<std::endl;
    for (int i=argc;i>0;i--)
    {
        std::cout<<argv[argc-i]<<std::endl;
    }
    
}