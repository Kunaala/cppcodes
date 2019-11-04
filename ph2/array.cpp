#include<iostream>
int main()
{   
    int n,j;
    std::cout<<"enter the size of array\n";
    std::cin>>n;
    int a[n]={0};
    std::cout<<"enter the elements in the array\n";
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"enter the index\n";
    std::cin>>j;
    std::cout<<"address of "<<a[j]<<" is "<<&a[j]<<std::endl;
    std::cout<<"address of "<<a[j+1]<<" is "<<&a[j+1]<<std::endl;

}