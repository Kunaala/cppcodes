#include<iostream>

int main(int argc,char *argv[])
{
    
    int n=argc-2;
    int key=atoi(argv[1]);
    // std::cout<<key<<":"<<n<<std::endl;
    for (int i=0;i<n;i++)
    {
        // if (atoi(argv[i+2])==key)
        // {
        //     std::cout<<"element: "<<key<<" found at position"<<i<<std::endl;
        //     break;
        // }
        
        if (atoi(argv[i+2])==key)
        {
           std::cout<<"element: "<<key<<" found at position:"<<i<<std::endl; 
           
           continue;
           std::cout<<argv[i+2]<<std::endl;
           //std::cout<<"element: "<<key<<" found at position"<<i<<std::endl;
        }
        std::cout<<argv[i+2]<<std::endl;
        


    }
    //std::cout<<argc<<std::endl;
    //std::cout<<argv[argc-2]<<std::endl;
}