#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	int m,i,flag=0;
	char num;
	cout<<"enter the number:";
	cin>>num;
	m=num/2;
	if(isdigit(num))
	{
	int num;
		for(i=2;i<=m;i++)
	{
		if(num%i==0)
		{
			cout<<"number is not a prime";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"given number prime";
	}
}
    
    else
    {
    	cout<<"invalid input";
	}

}
