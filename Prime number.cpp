#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;
cout<<">> Mohit Namdeo "<<endl;
cout<<">> Prime Number Program"<<endl;   
cout<<"---------------------------"<<endl;    
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}  