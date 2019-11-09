#include<iostream>
#include<cmath>

int main(int argc,char *argv[])
{
    //formula is {[(√5 + 1)/2] ^ n} / √5
    float t1,t2;
    t1=(sqrt(5)+1)/2;
    t2=pow(t1,atoi(argv[argc-1]))/sqrt(5);
    std::cout<<round(t2)<<std::endl;
}