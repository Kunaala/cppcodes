#include<iostream>

int main()
{
    std::cout<<"enter the string\n";
    std::string instr,mstr;
    getline(std::cin,instr);


    
    ///////////////////////pig latin of single word///////////////////////////////////////////////////////
    /*
    std::cin>>instr;
    char *pStart=&instr[0];
    char *pEnd=&instr[instr.length()-1];
    for (int k=instr.length()-2;k>=0;k--,pEnd--)
    {
        mstr[k]=*(pEnd);
        //std::cout<<k<<" : "<<mstr[k]<<std::endl;
        
    }
    //std::cout<<mstr<<std::endl;
    mstr[instr.length()-1]=*pStart;
    mstr[instr.length()]='a';
    mstr[instr.length()+1]='y';
    for(int k=0;k<instr.length()+2;k++)
         std::cout<<mstr[k];
    */
    ///////////////////////pig latin of single word///////////////////////////////////////////////////////
  

    //std::cout<<instr<<std::endl;
    char *pStart=&instr[0],*pEnd;
    for(int i=0;i<instr.length();i++)
    {
        
        std::cout<<i<<std::endl;
        if (isspace(instr[i]))
        {   
            //std::cout<<instr[i]<<std::endl;
            pEnd=&instr[i-1];
            for(int x=i-2;x>=0;x--,pEnd--)
            {
                mstr[x]=*(pEnd);
                std::cout<<x<<" : "<<mstr[x]<<std::endl;
            }
            mstr[i]=*pStart;
            pStart=&instr[i+1];
            mstr[i+1]='a';
            mstr[i+2]='y';
            
        }
        else
        {
            continue;
        }
        
       
        
    }
    for(int k=0;k<instr.length();k++)
        std::cout<<mstr[k];
    
    // for (int k=0;k<instr.length();k++)
    // {
    //     std::cout<<instr[k]<<std::endl;
    // }

}