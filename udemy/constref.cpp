#include<iostream>

void reffunc(char &c)

{   
    // c=98;                                                                                //value in the main function variable also changes
    // std::cout<<"the next letter in ascii table is: "<<(char)(c)<<std::endl;
    std::cout<<"the next letter in ascii table is: "<<(char)(c+1)<<std::endl; ////value in the main function variable remains the same

}

int main()
{
    char var1='a';
    char &rVar=var1;
    std::cout<<rVar<<std::endl;
    reffunc(rVar);
    std::cout<<"variable initialized in main function:"<<var1<<std::endl;
    const int v1=70;
    const int *p=&v1;
    std::cout<<v1<<std::endl;
    std::cout<<*p<<std::endl;


}