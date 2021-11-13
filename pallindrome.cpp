#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
cout<<">> Mohit Namdeo "<<endl;
cout<<">> Pallindrome"<<endl;   
cout<<"---------------------------"<<endl;    
  cout<<"Enter the Number = ";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  