// below is the code to find the factorial of a number 
#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the number"<<endl;
  int n,i,s=1;
  cin>>n;
  for(i=0;i<n;i++)
  {
    s *= i;
  }
  cout<<s<<endl;
}
