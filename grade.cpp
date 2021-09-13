#include <iostream>

using namespace std;


int main()
{
	int score;
	
	cout << "Enter grade (0~100): ";
	cin >> score;
	while (score > 100 || score < 0)
	{
		cout << "Grade must be between 0 and 100: ";
		cin >> score;
	}



	if (score <= 100 && score >= 90)
		cout << "That is an A!" << endl;
	else if (score < 90 && score >= 80)
		cout << "That is a B!" << endl;
	else if (score < 80 && score >= 70)
		cout << "That is a C!" << endl;
	else if (score < 70 && score >= 60)
		cout << "That is a D!" << endl;
	else
		cout << "That is a F!" << endl;


	return 0;
}
