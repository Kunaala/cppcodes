#include<iostream>

namespace classin
{
    class integers;
    
}

class classin::integers
{
    public:
        void display()
        {
            std::cout<<"first class\n";
        }
};
int main()
{
    classin::integers obj1;
    obj1.display();
}
