#include<iostream>

int printfn(int *p)
{
    std::cout<<*p<<std::endl;
}
int main()
{
    int arr[10]={0},*p;
    int arr2[2][3]={{1,2,3},{4,5,6}};
    p=arr;
    arr[0]=2;
    printfn(arr);
    std::cout<<arr2[1][3]<<std::endl;
    //std::cout<<*p<<std::endl;

}