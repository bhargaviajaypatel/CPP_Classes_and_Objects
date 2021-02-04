#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class room
{
	private:
		float l,b,h,l1,b1,ans,ans1;

	public:
	void get()
	{
		cout<<"Enter length for area: "<<endl;
		cin>>l1;
		cout<<"Enter breadth for area: "<<endl;
		cin>>b1;
		cout<<"Enter length for volume: "<<endl;
		cin>>l;
		cout<<"Enter breadth for volume: "<<endl;
		cin>>b;
		cout<<"Enter height for volume: "<<endl;
		cin>>h;
	}
	void calculatevolume()
	{
		ans=l*b*h;
	}
	void calculatearea()
	{
		ans1=l1*b1;
	}
	void put()
	{
		cout<<"Area is: "<<ans1<<endl;
		cout<<"Volume is: "<<ans<<endl;
	}
};
void main()
{
	clrscr();
	room room1;

	room1.get();
	room1.calculatearea();
	room1.calculatevolume();
	room1.put();

	getch();
}