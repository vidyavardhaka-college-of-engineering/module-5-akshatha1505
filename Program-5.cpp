//Find the missing parts in the given C++ program to check person is eligible to vote or not

//Expected input and output
//Input: 18
//Output: eligible to vote

#include<iostream>
using namespace std;
int main()
{
int age;
std::cout<<"Enter the age";
std::cin>>age;
if(age>=18)
	{
		cout<<"person is eligible for voting";
	}
	else
	{
		cout<<"person is not eligible for voting";
	}
	return 0; 
}


