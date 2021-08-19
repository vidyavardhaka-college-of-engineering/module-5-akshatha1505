//Find the missing statement in the given C++ program to find simple interest

//Expected input and output
//Input: 100 10 1
//Output: 10

#include <iostream>
using namespace std;
int main()
{
    int p,t,r,s; //declare the varibales
    std::cout << "Enter the values of p,t,r: "; 
    std::cin >> p >> t >> r; 
    s=(p*t*r)/100;
    std::cout << s;  
    return 0;
}
