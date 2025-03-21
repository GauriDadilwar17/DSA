#include<iostream>
#include<conio.h>
using namespace std;

class comlex
{
	int i,r;
	public:
		void getd()
		{
			cout<<"Enter the values =";
			cin>>i>>r;
		}
		void showd()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		friend void sum(c1, c2)
	
};
void sum(complex c1, complex c2)
{
	complex c3;
	c3.i=c1.i+c2.i;
	c3.r=c1.r+c2.r;
	cout<<"c3.r"<<"+"<<i<<"i"<<endl;
}
int main()
{
	complex c1,c2;
	c1.getd();
	c2.getd();
	c1.showd();
	c2.showd();
	cout<<"____________________________________________";
	sum(c1,c2);
	getch();
	return 0;
}
