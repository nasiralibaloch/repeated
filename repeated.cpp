//repeated values.
#include<iostream>
using namespace std;
 int main()
 {
  float arr[5]={23.4,34.5,55.5,35.5,55.5};
  int j,i;
  
  for(i=0; i<5; i++)
 {
  for(j=i;j<5;j++)
    
 if(arr[i]==arr[j])
 {
    cout<<"Dublicate Values are: "<<arr[i]<<endl;
 }
   
 }
  return 0;
 }
