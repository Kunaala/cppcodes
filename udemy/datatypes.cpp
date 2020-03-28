#include<iostream>
#include<limits>    // use to find out the greatest number the datatype can hold
#include<iomanip>
int main()
{   
    int n1;
    short n2;
    long n3;
    unsigned int n4;
    float f1=76.04;
    double d1=76.4389849;
    std::cout<<"max:min value of int datatype: "<<INT64_MAX<<":" << INT64_MIN <<std::endl;   // 9223372036854775807:-9223372036854775808
    std::cout<<"memory occupied by int (in bytes): "<<sizeof(n1)<<std::endl;
    std::cout<<"memory occupied by short int (in bytes): "<<sizeof(n2)<<std::endl;
    std::cout<<"memory occupied by unsigned int (in bytes): "<<sizeof(n4)<<std::endl;
    std::cout<<"max value of unsigned int  datatype: "<<UINT64_MAX <<std::endl;   // 18446744073709551615
    //////////////////////////////////////////////////////////////////////////////////////////////
    std::cout<<std::fixed<<f1<<std::endl;  //  fixed : decimal notation
    std::cout<<std::scientific<<f1<<std::endl;  // mantissa - e- exponent
    std::cout<<std::fixed<< std::setprecision(4)<< d1<<std::endl;  // to set the number of digits after decimal point

}
