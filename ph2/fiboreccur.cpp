#include<iostream>

int fibon(int n)
{   
    if (n<=1)
    {
        return n;
    }
 
    return fibon(n-1)+fibon(n-2);      
}
int main(int argc,char * argv[])
{
    std::cout<<fibon(atoi(argv[argc-1]))<<std::endl;
}