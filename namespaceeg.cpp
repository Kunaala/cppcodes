#include<bits/stdc++.h>
using namespace std;

namespace ns1
{
    int val=500;
    int op1() {return val*200;}
}

namespace ns2
{
    int val=200;
}
int main()
{
    std::cout<<ns1::val<<endl;
    cout<<ns1::op1()<<endl;
    return 0;
}