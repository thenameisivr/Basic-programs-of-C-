#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool flag = true;
  for(int i=2;i<n;i++){
    if(n%i==0){
      flag = false;
    }
  }

  if(flag == true){
    cout<<"It is a prime number ";
  }
  else{
    cout<<"It is not a prime number";
  }
}