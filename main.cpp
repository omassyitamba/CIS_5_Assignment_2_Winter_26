#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;
using std::cin;


int main()
{
	//name
	string name = "";
	//age
	int age = 0;
	//height
	double height = 0;
	//weight
	double weight = 0;
	// score
	int score = 0;

	//grabs user data
	cout << "Enter your name:";
	cin >> name;
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter your height (meters):";
	cin >> height;
	cout << "Enter your weight (kg)";
	cin >> weight;
	cout << "Enter your test score (0-100):";
	cin >> score;

	// calculate BMI
	double bmi = weight / (height * height);
		string common_comparison_category = "";
		if (bmi < 18.5)
		{
			common_comparison_category = "Underweight";
		}
		else if (bmi < 25)
		{
			common_comparison_category = "Normal Weight";
		}
		else if (bmi < 30)
		{
			common_comparison_category = "Overweight";
		}
		else
		{
			common_comparison_category = "Obese";
		}

	// calculate grade
		char grade = ' '
		;if (score >= 90)
		{
			grade = 'A';
		}
		else if (score >= 80)
		{
			grade = 'B';
		}
		else if (score >= 70)
		{
			grade = 'C';
		}
		else if (score >= 60)
		{
			grade = 'D';
		}
		else
		{
			grade = 'F';
		}
	// display output
	cout << endl;
	cout << std::fixed << std::setprecision(2);
		cout << "Hey " << name << " you're " << age << "years old with a BMI of " << bmi << "(" << common_comparison_category << ") and you got a grade " << grade << "!Keep it up!" << endl;

	return 0;
}