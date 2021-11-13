#include <iostream>  
using namespace std;  
int main()  
{   
cout<<">> Mohit Namdeo "<<endl;
cout<<">> Sum of Digits"<<endl;   
cout<<"---------------------------"<<endl;    
int n,sum=0,m;    
cout<<"Enter a number : ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"Sum is = "<<sum<<endl;    
return 0;  
}  