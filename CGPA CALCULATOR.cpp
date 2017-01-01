#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
using namespace std;

string StringToUpper(string strToConvert)
{
	transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
	return strToConvert;
}

int main()
{
	int Counter = 1, T2_CreditHour = 0, No_Subject, Counter2, T_CreditHour, Edit, C_Subject, CreditHour, Random;
	string Subject, Grade, Level;
	char AnsEdit, AnsGPA, AnsTrim, AnsCGPA;
	double GradePoint, GPA, CGPA, T_TempGPA, T2_TempGPA = 0.00, TempGPA;
	cout << " -------------------------------------------------------------------------------" << endl;
	cout << " |                              CGPA CALCULATOR                                |" << endl;
	cout << " -------------------------------------------------------------------------------" << endl;
	while ( Counter != 0 )
	{
		No_Subject = 0;
		Counter2 = 1;
		T_TempGPA = 0;
		T_CreditHour = 0;
		cout << "Please type in Foundation or Degree : ";
		cin >> Level;
		Level = StringToUpper( Level );
		while ( Level != "FOUNDATION" && Level != "DEGREE" )
		{
			cout << "Error! Please type in Foundation or Degree : ";
			cin >> Level;
			Level = StringToUpper( Level );
		}
		while ( No_Subject < 1 )
		{
			cout << "Please enter the number of subject(s) in this trimester : ";
			cin >> No_Subject;
			cout << endl;
			if ( No_Subject < 1 )
				cout << "Error! The minimum number is 1.";
		}
		
		while ( Counter2 <= No_Subject )
		{
			Edit = 1;
			C_Subject = 1;
			while ( Edit == 1 )
			{
				while ( C_Subject != 0 )
				{
					C_Subject = 0;
					if ( Level == "FOUNDATION" )
					{
						cout << "-----------------------------------------------------------" << endl;
						cout << "| PMT0101     PEN0045     PPP0101     PDS0101     PSP0101 |" << endl;
						cout << "| PMT0201     PEN0055     PMF0101     PCR0025     PSP0201 |" << endl;
						cout << "| PMT0301     PEN0065     PCT0101     PBU0045             |" << endl;
						cout << "-----------------------------------------------------------" << endl;
						cout << "Please key in the subject : ";
						cin >> Subject;
						cout << endl;

						Subject = StringToUpper( Subject );

						if ( Subject == "PCT0101" || Subject == "PMT0101" || Subject == "PSP0101" || Subject == "PBU0045" || Subject == "PDS0101" || Subject == "PMF0101" || Subject == "PMT0201" || Subject == "PMT0301" )
							CreditHour = 4;
						else if ( Subject == "PEN0045" || Subject == "PEN0055" || Subject == "PPP0101" || Subject == "PCR0025" || Subject == "PEN0065" || Subject == "PSP0201" )
							CreditHour = 3;
						else
						{
							cout << "Please key in the correct subject name." << endl;
							C_Subject = 1;
						}
					}
					else if ( Level == "DEGREE" )
					{
						cout << "----------------------------------------------------------------------" << endl;
						cout << "| TCP1101     TPT1101     TSN1101     TIC2151     MPU3206     MPU3408|" << endl;
						cout << "| TCP1201     TPT1201     TSN2101     TIC2251     MPU3207     MPU3409|" << endl;
						cout << "| TCP2101     TPT2201     TSN2201     TIC3151     MPU3208     MPU3410|" << endl;
						cout << "| TCP2201     TPT3101     TSN3151     TIC3251     MPU3209     MPU3411|" << endl;
						cout << "| TCP2451     TMA1101     TSN3251                 MPU3210     MPU3412|" << endl;
						cout << "| TCP2551     TMA1201                 MPU3113     MPU3211     MPU3413|" << endl;
						cout << "| TCP2651     TMA1301     PWC1010     MPU3123     MPU3343     MPU3414|" << endl;
						cout << "| TIS1101     TSE2101                 MPU3143     MPU3401     MPU3415|" << endl;
						cout << "| TIS2151     TSE2251     TGD2151     MPU3173     MPU3402     MPU3416|" << endl;
						cout << "| TIS2351     TSE2351     TGD2251     MPU3201     MPU3403     MPU3417|" << endl;
						cout << "| TIS3151     TSE2451     TGD3151     MPU3202     MPU3404     MPU3418|" << endl;
						cout << "| TIS3251     TSE3151     TGD3251     MPU3203     MPU3405     MPU3419|" << endl;
						cout << "| TIS3351     TSE3251     TGD3351     MPU3204     MPU3406     MPU3420|" << endl;
						cout << "| TIS3451     TSE3351     TGD3451     MPU3205     MPU3407     MPU3421|" << endl;
						cout << "----------------------------------------------------------------------" << endl;
						cout << "Please key in the subject : ";
						cin >> Subject;
						cout << endl;

						Subject = StringToUpper( Subject );

						if ( Subject == "TMA1101" || Subject == "TMA1201" || Subject == "TMA1301" || Subject == "TPT1101" || Subject == "TPT3101" )
							CreditHour = 4;
						else if ( Subject == "TCP1101" || Subject == "TCP1201" || Subject == "TCP2101" || Subject == "TCP2201" || Subject == "TCP2451" || Subject == "TCP2551" || Subject == "TCP2651" )
							CreditHour = 4;
						else if ( Subject == "TIS1101" || Subject == "TIS2151" || Subject == "TIS2351" || Subject == "TIS3151" || Subject == "TIS3251" || Subject == "TIS3351" || Subject == "TIS3451" )
							CreditHour = 4;
						else if ( Subject == "TSE2101" || Subject == "TSE2251" || Subject == "TSE2351" || Subject == "TSE2451" || Subject == "TSE3151" || Subject == "TSE3251" || Subject == "TSE3351" )
							CreditHour = 4;
						else if ( Subject == "TGD2151" || Subject == "TGD2251" || Subject == "TGD3151" || Subject == "TGD3251" || Subject == "TGD3351" || Subject == "TGD3451" )
							CreditHour = 4;
						else if ( Subject == "TSN1101" || Subject == "TSN2101" || Subject == "TSN2201" || Subject == "TSN3151" || Subject == "TSN3251" )
							CreditHour = 4;
						else if ( Subject == "TIC2151" || Subject == "TIC2251" || Subject == "TIC3151" || Subject == "TIC3251" )
							CreditHour = 4;
						else if ( Subject == "TPT2201" )
							CreditHour = 6;
						else if ( Subject == "TPT1201" || Subject == "PWC1010" )
							CreditHour = 3;
						else if ( Subject == "MPU3113" || Subject == "MPU3123" || Subject == "MPU3143" || Subject == "MPU3173" )
							CreditHour = 3;
						else if ( Subject == "MPU3201" || Subject == "MPU3202" || Subject == "MPU3203" || Subject == "MPU3204" || Subject == "MPU3205" || Subject == "MPU3206" )
							CreditHour = 3;
						else if ( Subject == "MPU3207" || Subject == "MPU3208" || Subject == "MPU3209" || Subject == "MPU3210" || Subject == "MPU3211" || Subject == "MPU3343" )
							CreditHour = 3;
						else if ( Subject == "MPU3401" || Subject == "MPU3402" || Subject == "MPU3403" || Subject == "MPU3404" || Subject == "MPU3405" || Subject == "MPU3406" )
							CreditHour = 2;
						else if ( Subject == "MPU3407" || Subject == "MPU3408" || Subject == "MPU3409" || Subject == "MPU3410" || Subject == "MPU3411" )
							CreditHour = 2;
						else if ( Subject == "MPU3412" || Subject == "MPU3413" || Subject == "MPU3414" || Subject == "MPU3415" || Subject == "MPU3416" )
							CreditHour = 2;
						else if ( Subject == "MPU3417" || Subject == "MPU3418" || Subject == "MPU3419" || Subject == "MPU3420" || Subject == "MPU3421" )
							CreditHour = 2;
						else
						{
							cout << "Please key in the correct subject name." << endl;
							C_Subject = 1;
						}
					}
				}	
				cout << "------------------------" << endl;
				cout << "| A+    B+    C+    D+ |" << endl;
				cout << "| A     B     C     D  |" << endl;
				cout << "| A-    B-    C-    F  |" << endl;
				cout << "------------------------" <<endl;

				cout << "Please key in the grade : ";
				cin >> Grade;
				cout << endl;

				Grade = StringToUpper ( Grade );

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

				cout << "------------------------------------------------" << endl;
				cout << "| Subject:" << Subject << "    Grade:" << Grade << "    Credit Hour:" << CreditHour << " |" << endl;
				cout << "------------------------------------------------" << endl;

				cout << "Do you want to make changes to your input? Key in Y (Yes) or N (No) : ";
				cin >> AnsEdit;
				cout << endl;

				if ( islower(AnsEdit) )
					AnsEdit = toupper(AnsEdit);

				if ( AnsEdit == 'Y' )
				{
					C_Subject = 1;
					Edit = 1;
				}
				else if ( AnsEdit == 'N' )
					Edit = 0;
			}
			T_CreditHour = T_CreditHour + CreditHour;
			TempGPA = GradePoint * CreditHour;
			T_TempGPA = T_TempGPA + TempGPA;
			T2_TempGPA = T2_TempGPA + TempGPA;
			T2_CreditHour = T2_CreditHour + CreditHour;
			Counter2 = Counter2 + 1;
		}
		GPA = T_TempGPA / T_CreditHour;
		CGPA = T2_TempGPA / T2_CreditHour;

		cout << "Do you want to calculate your GPA? Key in Y (Yes) or other key (No) : ";
		cin >> AnsGPA;
		cout << endl;

		if ( islower(AnsGPA) )
			AnsGPA = toupper(AnsGPA);

		if ( AnsGPA == 'Y' )
		{
			srand( time(NULL) );
			Random = rand() % 2;
			if ( GPA < 2.00 )
			{
				if ( Random == 0 )
					cout << "Don't give up!" << endl;
				if ( Random == 1 )
					cout << "Believe in yourself!" << endl;
			}
			else if ( GPA < 2.67 )
			{
				if ( Random == 0 )
					cout << "Work harder!" << endl;
				if ( Random == 1 )
					cout << "You can do better!" << endl;
			}
			else if ( GPA < 3.67 )
			{
				if ( Random == 0 )
					cout << "Not bad!" << endl;
				if ( Random == 1 )
					cout << "Keep it up!" << endl;
			}
			else
			{
				if ( Random == 0 )
					cout << "Well done!" << endl;
				if ( Random == 1 )
					cout << "Excellent!" << endl;
			}
			cout << "Your GPA is ";
			cout.precision(2);
			cout.setf(ios::fixed);
			cout << GPA << endl;
		}
		cout << "Do you want to add new trimester? Key in Y (Yes) or other key (No) : ";
		cin >> AnsTrim;
		cout << endl;

		if ( islower(AnsTrim) )
			AnsTrim = toupper(AnsTrim);

		if ( AnsTrim == 'Y' )
			Counter += 1;
		else
			Counter = 0;
	}
	cout << "Do you want to calculate CGPA? Key in Y (Yes) or other key (No) : ";
	cin >> AnsCGPA;
	cout << endl;

	if ( islower(AnsCGPA) )
		AnsCGPA = toupper(AnsCGPA);
	if ( AnsCGPA == 'Y' )
	{
		srand( time(NULL) );
		Random = rand() % 2;
		if ( CGPA < 2.00 )
		{
			if ( Random == 0 )
					cout << "Don't give up!" << endl;
			if ( Random == 1 )
					cout << "Believe in yourself!" << endl;
		}
		else if ( CGPA < 2.67 )
		{
			if ( Random == 0 )
					cout << "Work harder!" << endl;
			if ( Random == 1 )
					cout << "You can do better!" << endl;
		}
		else if ( CGPA < 3.67 )
		{
			if ( Random == 0 )
					cout << "Not bad!" << endl;
			if ( Random == 1 )
					cout << "Keep it up!" << endl;
		}
		else
		{
			if ( Random == 0 )
					cout << "Well done!" << endl;
			if ( Random == 1 )
					cout << "Excellent!" << endl;
		}
		cout << "Your CGPA is ";
		cout.precision(2);
		cout.setf(ios::fixed);
		cout << CGPA << endl;
	}
	system("pause");
}