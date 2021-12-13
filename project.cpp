#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int grade;
	int gradeCount = 0;
	int avg;
	int i = 0;
	while (i == 0)
	{
		cin >> grade;
		if (grade > 0)
		{
			sum = sum + grade;
			gradeCount++;
		}

		else if (grade == 0)
		{
			i = 2;
		}
	}

	avg = sum / gradeCount;
	cout << "your avg is: " << avg << endl;





	//int sum = 0, y;
	//double avg;
	//cout << "enter to start 1 to finish 0" << endl;
	//cin >> y;
	//if (y == 1) {
		//cin >> y; 
		//for (int x = 0;x <= y;++x) {
			//sum += y;
		//}
		
	//}
	//else if (y == 0)
	//{
		//avg = sum/y;
		//cout << "the avg=";
	//}
	












}
