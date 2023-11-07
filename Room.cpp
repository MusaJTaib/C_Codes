//		NESTED STRUCTURES

#include <iostream>
using namespace std;

//		DISTANCE structure

struct Distance //English distance
{
	int feet;
	float inches;
};

//		ROOM structure

struct Room 
{
	Distance length; //length of rectangular room
	Distance width; //width of room
};


//*****************************************************

int main()
{
	Room dining; 
	dining.length.feet = 13; 
	dining.length.inches = 6.5;

	dining.width.feet = 10;
	dining.width.inches = 0.0;

	
	//convert length & width
	float l = dining.length.feet + dining.length.inches / 12;
	float w = dining.width.feet  + dining.width.inches  / 12;

	//find area and display it
	cout << "Dining room area is " << l * w
		 << " square feet\n";
	system("pause");
	return 0;
}