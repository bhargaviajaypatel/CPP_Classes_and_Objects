#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	private:
		float m1,m2,percent,total,rollno;

	public:
	void get()
	{
		cout<<"\nEnter Roll No. : ";
		cin>>rollno;

		cout<<"Enter marks for Subject 1: ";
		cin>>m1;

		cout<<"Enter marks for Subject 2: ";
		cin>>m2;
	}
	void calcpercent()
	{
		percent=m1+m2/2.0;
	}
	void grade()
	{
		if(percent>=95)
		{
			cout<<"Grade A"<<endl;
		}
		else if(percent>=70)
		{
			cout<<"Grade B"<<endl;
		}
		else if(percent>=50)
		{
			cout<<"Grade C"<<endl;
		}
		else
		{
			cout<<"Grade D"<<endl;
		}
	}
	void put()
	{
		cout<<"\nRoll No. : "<<rollno<<endl;
		cout<<"Marks for Subject 1: "<<m1<<endl;
		cout<<"Marks for Subject 2: "<<m2<<endl;
		cout<<"Percentage: "<<percent<<endl;
	}
};
void main()
{
	clrscr();

	student s1,s2;

	s1.get();
	s1.calcpercent();
	s1.put();
	s1.grade();

	s2.get();
	s2.calcpercent();
	s2.put();
	s2.grade();

	getch();
}