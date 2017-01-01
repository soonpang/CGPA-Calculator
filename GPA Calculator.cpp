#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

string StringToUpper(string strToConvert)
{
	transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
	return strToConvert;
}

int main()
{
	string Grade;
	int Counter = 0, AnswerChecking;
	char Answer;
	double GradePoint, GPA, T_CreditHour = 0, T_GradeXCredit = 0, GradeXCredit, CreditHour;

	while (Counter == 0)
	{
		cout << "------------------------" << endl;
		cout << "| A+    B+    C+    D+ |" << endl;
		cout << "| A     B     C     D  |" << endl;
		cout << "| A-    B-    C-    F  |" << endl;
		cout << "------------------------" <<endl;

		cout << "Please key in the grade and credit hour : ";
		cin >> Grade >> CreditHour;
		cout << endl;

		Grade = StringToUpper(Grade);

		if ( Grade == "A+" )
			GradePoint = 4.00;
		else if ( Grade == "A" )
			GradePoint = 4.00;
		else if ( Grade == "A-" )
			GradePoint = 3.67;
		else if ( Grade == "B+" )
			GradePoint = 3.33;
		else if ( Grade == "B" )
			GradePoint = 3.00;
		else if ( Grade == "B-" )
			GradePoint = 2.67;
		else if ( Grade == "C+" )
			GradePoint = 2.33;
		else if ( Grade == "C" )
			GradePoint = 2.00;
		else if ( Grade == "C-" )
			GradePoint = 1.67;
		else if ( Grade == "D+" )
			GradePoint = 1.33;
		else if ( Grade == "D" )
			GradePoint = 1.00;
		else
			GradePoint = 0.00;

		T_CreditHour = T_CreditHour + CreditHour;
		GradeXCredit = GradePoint * CreditHour;
		T_GradeXCredit = T_GradeXCredit + GradeXCredit;

		cout << "Please press Y to proceed or N to calculate GPA : ";
		cin >> Answer;

		if (islower(Answer))
			Answer = toupper(Answer);

		AnswerChecking = 1;
		while (AnswerChecking == 1)
		{
			if (Answer == 'Y')
			{
				Counter = 0;
				AnswerChecking = 0;
			}
			else if (Answer == 'N')
			{	
				Counter = 1;
				AnswerChecking = 0;
			}
			else
				cout << "You have entered an invalid input. Please try again." << endl;
		}

	}
	GPA = T_GradeXCredit / T_CreditHour;
	cout << "Your GPA is = " << GPA << "." << endl;
	system("pause");
}