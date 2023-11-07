#include<iostream>
using namespace std;
class StudentResult
{
	const int rollNumber;  // const data member
	int calculusScore;
	int physicsScore;
	int programmingScore;
	float percentage;
	char grade;
	static int n_students;	// private static member

public:
	StudentResult();
	StudentResult(int roll, int cal, int phy, int prog);
	void setData(int cal, int phy, int prog);
	void calculatePercentage();
	void calculateGrade(); 
	void printResultSummary() const;	// const member function
	static void print_nStudents()
	{
		cout << endl << "Number of students: "<< n_students << endl;
	}
	~StudentResult();
};

int StudentResult::n_students = 0;

StudentResult::StudentResult() : rollNumber(0), calculusScore(0), physicsScore(0), programmingScore(0)
{
	cout << "\n Default Constructor \n";
	++n_students;
	calculatePercentage();
	calculateGrade();
}
StudentResult::StudentResult(int roll, int cal, int phy, int prog) : rollNumber(roll)
{
	calculusScore = cal;
	physicsScore = phy;
	programmingScore = prog;

	++n_students;
	cout << "\n Parametrized Constructor \n";

	calculatePercentage();
	calculateGrade();
}
void StudentResult::setData( int cal, int phy, int prog)
{
	calculusScore = cal;
	physicsScore = phy;
	programmingScore = prog;

	calculatePercentage();
	calculateGrade();
}
void StudentResult::calculatePercentage() 
{
	percentage = ((static_cast<float>(calculusScore + physicsScore + programmingScore)) / 300) * 100;
}
void StudentResult::calculateGrade()  
{
	if (percentage < 50)
		grade = 'F';
	else if (percentage >= 50 && percentage < 60)
		grade = 'D';
	else if (percentage >= 60 && percentage < 70)
		grade = 'C';
	else if (percentage >= 70 && percentage < 80)
		grade = 'B';
	else if (percentage >= 80)
		grade = 'A';
}
void StudentResult::printResultSummary() const
{

	cout << "Roll Number : " << rollNumber << endl;
	cout << "Percentage : " << percentage << " %"<< endl;
	cout << "Grade : " << grade << endl;
}	
// const member function
StudentResult::~StudentResult()
{
	--n_students;
	cout << "\nObject Destroyed\n";
}


int main()
{
	{
		StudentResult::print_nStudents();

		StudentResult student1(34, 80, 75, 95);  // Parameterized Constructor 
		student1.printResultSummary();

		StudentResult::print_nStudents();
	}

	StudentResult::print_nStudents();
	cout << endl;
	system("pause");
	return 0;
}



