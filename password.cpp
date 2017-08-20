/*
password generator.
by b@dbear
*/
#include<iostream>
using namespace std;

int main ()
{
	
  long pass;
do
{	
	cout<<"Enter your Password:";
	cin>>pass;
	
	if (pass== 1010)
	{
		cout<<"Welcome !"<<endl;
	}
	else 
	{
		cout<<"Access Denided!"<<endl<<endl;
	}
}
	while (pass != 1010);
	getchar();
	return 0;
}
