//Correct the C++ to find the sum of first n numbers

//Expected input and output
//Input: 5
//Output: 15

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0,i=0 ; //complete the declaration part

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    while(i<=n)
    {
       sum=sum+i; 
       i++; 
    }

    std::cout <<sum;
    return 0;
}

