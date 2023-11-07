// Measurement.cpp

#include <iostream>
using namespace std;


//		STRUCTURE DEFINITION

struct Distance 
{
	int feet;
	float inches;
};


//		MAIN FUNCTION

int main()
{
	Distance d1, d3; 
	Distance d2 = { 11, 6.25 }; 

	cout << "\nEnter feet : " ; cin >> d1.feet;
	cout << "Enter inches : " ; cin >> d1.inches;

	//add lengths d1 and d2 to get d3
	d3.inches = d1.inches + d2.inches; 
	d3.feet = 0; //(for possible carry)

	if (d3.inches >= 12.0) 
	{ 
		d3.inches -= 12.0; //and
		d3.feet++; 
	}

	d3.feet += d1.feet + d2.feet; //add the feet
								  //display all lengths
	cout << d1.feet << "\' " << d1.inches << "\" + ";
	cout << d2.feet << "\' " << d2.inches << "\" = ";
	cout << d3.feet << "\' " << d3.inches << "\"\n";

	system("pause");
	return 0;
}