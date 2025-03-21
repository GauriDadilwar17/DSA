#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
	int a,b;
	public:
		void getd()
		{
			cout<<"Enter the value =";
			cin>>a>>b;
		}
    friend void avg(sample);
};
void avg(sample s)
{
	cout<<"AVG ="<<(s.a+s.b)/2;
	
} 
int main()
{
	sample s;
	s.getd();
	avg(s);
	getch();
	return 0;
   }   
