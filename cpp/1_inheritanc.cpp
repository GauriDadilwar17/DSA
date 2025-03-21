#include<iostream>
#include<conio.h>
using namespace std;


class college
{
	public:
	char name[40];
	int pin;
	void cgdata()
	{
	//	cout<<"enter the details of college :"<<endl;
		cout<<"enter the name of the college ="<<endl;
	    cin>>name;
	    cout<<"enter the pin number of the college [6 digits only]"<<endl;
	    cin>>pin;
	}
	void csdata()
	{
		cout<<"entered data is :"<<endl;
		cout<<name<<pin;
	}
    
    	
};

class teacher:public college
{
	public:
		char tname[20];
		int phno;
		void tgdata()
		{
			cgdata();
			cout<<"enter the name of the teacher ="<<endl;
			cin>>tname;
			cout<<"enter the phone number of teahcer ="<<endl;
			cin>>phno;
		}
		void tsdata()
		{
			csdata();
			cout<<"entered data is ="<<endl;
			cout<<tname<<phno;
		}
};
class student:public teacher
{
	char sname[20];
	int rollno;
	
	void sgdata()
	{
		tgdata();
		cout<<"enter the name of the student ="<<endl;
		cin>>sname;
		cout<<"enter the roll number of student ="<<endl;
		cin>>rollno;
	}
	void ssdata()
	{
		tsdata();
		cout<<"the entered data is ="<<endl
		cout<<sname<<rollno;
	}
};
int main()
{
	student s *ptr;
	ptr=&s;
	ptr->tgdata();
	ptr->ssdata();
	getch();
	return 0;
	
}


