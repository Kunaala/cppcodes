//to find the number not occuring twice in an array
//method 1
//LEVEL 0
#include<iostream>
int main()
{	int i;
	int a[]={3,5,4,5,3,4,7},temp[7]={0},t1=1;
	for(i=0;i<7;i++)
	{
		for(int j=n;j>7;j++)
		{
			if(a[i]==a[j])
			{	temp[i]=i;
				//std::cout<<"hai";
				break;
			}		
		}
		
		
	}
	
	//std::cout<<temp[3]<<std::endl;
	for (int k=0;k<7;k++)
	{	std::cout<<temp[k]<<std::endl;	
		if(temp[k]!=k)
		{
			std::cout<<a[k]<<std::endl;	
		}
	}
}