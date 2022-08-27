#include<iostream> 
using namespace std; 
int main() 
{ 
int row,i,j; 
cout<<"ENTER THE NUMBER OF ROWS => "; 
cin>>row; 
for(i=0;i<row; i++) 
{ 
for(j=0;j<=i;j++) 
{ 
cout<<i+1; 
} 
cout<<"\n"; 
} 
}
