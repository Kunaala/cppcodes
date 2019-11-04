//This script requires command line arguments 
//argv[1] for mantissa ; argv[2] for exponent
#include<iostream>
#include<cmath>
int main(int argc,char *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int c=pow(a,b);
    std::cout<<c<<std::endl;
}