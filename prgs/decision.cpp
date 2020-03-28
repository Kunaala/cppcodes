#include<iostream>
int printret(int j)
{
    return j;
}
int main()
{
    int i;
    std::cout<<"enter value of i"<<"\n";
    std::cin>> i;
    if (i < 5)
    {
        if(i<0)
        {
            std::cout<<"transaction invalid\n";
        }
        std::cout<<"no upi transfer"<<"\n";

    }
    else if(i<10)
    {
        std::cout<<"le le\n";
    }
    else
    {
        std::cout<<"bahut acche\n";
        
    }
    std::cout<<printret(i)<<"  is entered\n";

return 1;

}