#include<iostream>

int main()
{
    std::cout<<"enter the input string\n";
    std::string instr;
    std::cin>>instr;
    char cinput[instr.length()+1],coutput[instr.length()+1];
    for(int i=0;i<instr.length();i++)
    {
        cinput[i]=instr[i];  
    }

    //////////////////////USING ARRAYS///////////////////////////////////////

    //std::cout<<cinput<<std::endl;
    /*
    for (int x=0,y=instr.length();x<instr.length()+1;x++,y--)
     {
         coutput[x]=cinput[y];
         //std::cout<<coutput;
    
     }
    for(int x=0;x<instr.length()+1;x++)
      {  
          std::cout<<coutput[x];
      }
    */
    //////////////////////USING ARRAYS///////////////////////////////////////

   /////////////////////USING POINTERS///////////////////////////////////////
   ///*
    char *pStart = cinput;
    char *pEnd ;
    pEnd= &cinput[instr.length()-1];
    
    //std::cout<<pEnd;
   
    for (;;pStart++,pEnd--)
     {
        //  std::cout<<"hai";
        if(pStart < pEnd)
        {
           char temp=*pStart;
           *pStart=*pEnd;
           *pEnd=temp;
           //std::cout<<cinput<<std::endl;
           
        }
        else
        {
            break;
        }
        
    
     }
    std::cout<<cinput;
   /////////////////////USING POINTERS///////////////////////////////////////

    //*/
}