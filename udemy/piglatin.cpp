#include<iostream>

int main()
{
    std::cout<<"enter the sentence\n";
    std::string instr,mstr;
    std::cin>>instr;
    std::cout<<instr<<std::endl;
    for(int i=0;i<instr.length();i++)
    {
        char *pStart=&instr[0],*pEnd;
        std::cout<<isspace(instr[i])<<std::endl;
        if (isspace(instr[i]))
        {   
            std::cout<<instr[i]<<std::endl;
            pEnd=&instr[i-1];
            for(int x=i;x>=0;x--,pEnd--)
            {
                mstr[x]=*(pEnd);
            }
            mstr[i]=*pStart;
            pStart=&instr[i+1];
            mstr[i+1]='a';
            mstr[i+2]='y';
            std::cout<<mstr<<" ";
        }
    }
}