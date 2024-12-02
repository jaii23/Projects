// GROUP 8 TX02 
// MEMBERS: Abit, Argosino, Calonge, Manasis

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//GRADING SYSTEM 
/* FEATURES:
		Input User Information 
		Input Grades		
		View Grades 
		View Grade Conversion Guide 
		Exit	
*/
//course title are given: itc lec and lab, comprog lec and lab, pe, ppe, rph, sts

int main()
{
	string fullName, section;
	int studId, mGrade = 0, fGrade = 0, mmChoice = 0;
	float itcLecM = 0.0, itcLecF = 0.0, itcLabM = 0.0, itcLabF = 0.0, cProgLecM = 0.0, cProgLecF = 0.0, cProgLabM = 0.0, cProgLabF = 0.0, peM = 0.0, peF = 0.0, ppeM = 0.0, ppeF = 0.0, rphM = 0.0, rphF = 0.0, stsM = 0.0, stsF = 0.0; // VARIABLES PER SUBJECT
	float itcLecAve = 0.0, itcLabAve = 0.0, cProgLecAve = 0.0, cProgLabAve = 0.0, peAve = 0.0, ppeAve = 0.0, rphAve = 0.0, stsAve = 0.0, gpa = 0.0;
	float itcLecAveDis, itcLabAveDis, cProgLecAveDis, cProgLabAveDis, peAveDis, ppeAveDis, rphAveDis, stsAveDis, gpaDis;

	//input user info
	cout << "----------------------------------------------------------------\n";
	cout << "||          Welcome to qt girliepop grading system <3         ||\n";
	cout << "----------------------------------------------------------------\n";
	cout << "Enter Full Name: ";
	getline(cin, fullName);

	cout << "Enter Student ID: ";
	cin >> studId;

	cout << "Enter Section: ";
	cin >> section;

	system("pause");
	cout << "----------------------------------------------------------------\n";
	cout << "| Name	     || " << fullName << "								 \n";
	cout << "----------------------------------------------------------------\n";
	cout << "| Student ID || " << studId << "								 \n";
	cout << "----------------------------------------------------------------\n";
	cout << "| Section    || " << section << "								 \n";
	cout << "----------------------------------------------------------------\n";


	cout << "Thank you for filling out relevant information! \n";

	system("pause");
	system("cls");

	
	do {
		cout << "What would you like to do now?\n";
		cout << "MAIN MENU: \n1 - Input Grades \n2 - View Grades \n3 - View Grade Conversion Guide \n4 - Exit \nChoice: ";
		cin >> mmChoice;
		
		//menu choices
		switch (mmChoice) {
		case 1: // input grades
			system("pause");
			system("cls");
			cout << "ENTER YOUR GRADES!\n";

			// ITC LEC GRADES
			cout << "\nEnter grades for Introduction to Computing (LEC)";
			do {
				cout << "\nMidterm: ";
				cin >> itcLecM;
				if (itcLecM < 0 || itcLecM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (itcLecM < 0 || itcLecM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> itcLecF;
				if (itcLecF < 0 || itcLecF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (itcLecF < 0 || itcLecF > 100); // CHECK IF ENTERED VALUE IS VALID


			// ITC LAB GRADES
			cout << "\nEnter grades for Introduction to Computing (LAB)";

			do {
				cout << "\nMidterm: ";
				cin >> itcLabM;
				if (itcLabM < 0 || itcLabM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (itcLabM < 0 || itcLabM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> itcLabF;
				if (itcLabF < 0 || itcLabF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (itcLabF < 0 || itcLabF > 100); // CHECK IF ENTERED VALUE IS VALID

			// CPROG LEC GRADES 
			cout << "\nEnter grades for Computer Programming 1 (LEC)";
			do {
				cout << "\nMidterm: ";
				cin >> cProgLecM;
				if (cProgLecM < 0 || cProgLecM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (cProgLecM < 0 || cProgLecM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> cProgLecF;
				if (cProgLecF < 0 || cProgLecF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (cProgLecF < 0 || cProgLecF > 100); // CHECK IF ENTERED VALUE IS VALID

			// CPROG LAB GRADES
			cout << "\nEnter grades for Computer Programming 1 (LAB)";
			do {
				cout << "\nMidterm: ";
				cin >> cProgLabM;
				if (cProgLabM < 0 || cProgLabM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (cProgLabM < 0 || cProgLabM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> cProgLabF;
				if (cProgLabF < 0 || cProgLabF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (cProgLabF < 0 || cProgLabF > 100); // CHECK IF ENTERED VALUE IS VALID

			// PE GRADES
			cout << "\nEnter grades for Physical Education 1 (Midterm and Finals): ";
			do {
				cout << "\nMidterm: ";
				cin >> peM;
				if (peM < 0 || peM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (peM < 0 || peM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> peF;
				if (peF < 0 || peF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (peF < 0 || peF > 100); // CHECK IF ENTERED VALUE IS VALID

			// PPE GRADES
			cout << "\nEnter grades for Personal and Professional Effectiveness";
			do {
				cout << "\nMidterm: ";
				cin >> ppeM;
				if (ppeM < 0 || ppeM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (ppeM < 0 || ppeM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> ppeF;
				if (ppeF < 0 || ppeF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (ppeF < 0 || ppeF > 100); // CHECK IF ENTERED VALUE IS VALID

			// RPH GRADES 
			cout << "\nEnter grades for Readings in Philippine History";
			do {
				cout << "\nMidterm: ";
				cin >> rphM;
				if (rphM < 0 || rphM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (rphM < 0 || rphM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> rphF;
				if (rphF < 0 || rphF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (rphF < 0 || rphF > 100); // CHECK IF ENTERED VALUE IS VALID

			// STS GRADES
			cout << "\nEnter grades for Science Technology and Society";
			do {
				cout << "\nMidterm: ";
				cin >> stsM;
				if (stsM < 0 || stsM > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (stsM < 0 || stsM > 100); // CHECK IF ENTERED VALUE IS VALID

			do {
				cout << "Finals: ";
				cin >> stsF;
				if (stsF < 0 || stsF > 100)
				{
					cout << "Incorrect grade. Try again.";
				}
			} while (stsF < 0 || stsF > 100); // CHECK IF ENTERED VALUE IS VALID

			system("pause");
			system("cls");
			break;

		case 2: // VIEW GRADES
			system("pause");
			system("cls");

			// GRADE CONVERSION COMPUTATION

			// ITC LEC MIDTERM GRADE CONVERSION
			{
				if (itcLecM >= 97 && itcLecM <= 100)
				{
					itcLecM = 4.0;
				}
				else if (itcLecM >= 93 && itcLecM <= 96)
				{
					itcLecM = 3.5;
				}
				else if (itcLecM >= 89 && itcLecM <= 92)
				{
					itcLecM = 3.0;
				}
				else if (itcLecM >= 85 && itcLecM <= 88)
				{
					itcLecM = 2.5;
				}
				else if (itcLecM >= 80 && itcLecM <= 84)
				{
					itcLecM = 2.0;
				}
				else if (itcLecM >= 75 && itcLecM <= 79)
				{
					itcLecM = 1.5;
				}
				else if (itcLecM >= 70 && itcLecM <= 74)
				{
					itcLecM = 1.0;
				}
				else if (itcLecM < 70 && itcLecM > 0)
				{
					itcLecM = 0.5;
				}
				else
				{
					itcLecM = 0.0;
				}
			}

			// ITC LEC FINAL GRADE CONVERSION
			{
				if (itcLecF >= 97 && itcLecF <= 100)
				{
					itcLecF = 4.0;
				}
				else if (itcLecF >= 93 && itcLecF <= 96)
				{
					itcLecF = 3.5;
				}
				else if (itcLecF >= 89 && itcLecF <= 92)
				{
					itcLecF = 3.0;
				}
				else if (itcLecF >= 85 && itcLecF <= 88)
				{
					itcLecF = 2.5;
				}
				else if (itcLecF >= 80 && itcLecF <= 84)
				{
					itcLecF = 2.0;
				}
				else if (itcLecF >= 75 && itcLecF <= 79)
				{
					itcLecF = 1.5;
				}
				else if (itcLecF >= 70 && itcLecF <= 74)
				{
					itcLecF = 1.0;
				}
				else if (itcLecF < 70 && itcLecF > 0)
				{
					itcLecF = 0.5;
				}
				else
				{
					itcLecF = 0.0;
				}
			}

			// ITC LAB MIDTERM GRADE CONVERSION
			{
				if (itcLabM >= 97 && itcLabM <= 100)
				{
					itcLabM = 4.0;
				}
				else if (itcLabM >= 93 && itcLabM <= 96)
				{
					itcLabM = 3.5;
				}
				else if (itcLabM >= 89 && itcLabM <= 92)
				{
					itcLabM = 3.0;
				}
				else if (itcLabM >= 85 && itcLabM <= 88)
				{
					itcLabM = 2.5;
				}
				else if (itcLabM >= 80 && itcLabM <= 84)
				{
					itcLabM = 2.0;
				}
				else if (itcLabM >= 75 && itcLabM <= 79)
				{
					itcLabM = 1.5;
				}
				else if (itcLabM >= 70 && itcLabM <= 74)
				{
					itcLabM = 1.0;
				}
				else if (itcLabM < 70 && itcLabM > 0)
				{
					itcLabM = 0.5;
				}
				else
				{
					itcLabM = 0.0;
				}
			}

			// ITC LAB FINAL GRADE CONVERSION
			{
				if (itcLabF >= 97 && itcLabF <= 100)
				{
					itcLabF = 4.0;
				}
				else if (itcLabF >= 93 && itcLabF <= 96)
				{
					itcLabF = 3.5;
				}
				else if (itcLabF >= 89 && itcLabF <= 92)
				{
					itcLabF = 3.0;
				}
				else if (itcLabF >= 85 && itcLabF <= 88)
				{
					itcLabF = 2.5;
				}
				else if (itcLabF >= 80 && itcLabF <= 84)
				{
					itcLabF = 2.0;
				}
				else if (itcLabF >= 75 && itcLabF <= 79)
				{
					itcLabF = 1.5;
				}
				else if (itcLabF >= 70 && itcLabF <= 74)
				{
					itcLabF = 1.0;
				}
				else if (itcLabF < 70 && itcLabF > 0)
				{
					itcLabF = 0.5;
				}
				else
				{
					itcLabF = 0.0;
				}
			}

			// COMPROG LEC MIDTERM GRADE CONVERSION
			{
				if (cProgLecM >= 97 && cProgLecM <= 100)
				{
					cProgLecM = 4.0;
				}
				else if (cProgLecM >= 93 && cProgLecM <= 96)
				{
					cProgLecM = 3.5;
				}
				else if (cProgLecM >= 89 && cProgLecM <= 92)
				{
					cProgLecM = 3.0;
				}
				else if (cProgLecM >= 85 && cProgLecM <= 88)
				{
					cProgLecM = 2.5;
				}
				else if (cProgLecM >= 80 && cProgLecM <= 84)
				{
					cProgLecM = 2.0;
				}
				else if (cProgLecM >= 75 && cProgLecM <= 79)
				{
					cProgLecM = 1.5;
				}
				else if (cProgLecM >= 70 && cProgLecM <= 74)
				{
					cProgLecM = 1.0;
				}
				else if (cProgLecM < 70 && cProgLecM > 0)
				{
					cProgLecM = 0.5;
				}
				else
				{
					cProgLecM = 0.0;
				}
			}

			// COMPROG LEC FINAL GRADE CONVERSION
			{
				if (cProgLecF >= 97 && cProgLecF <= 100)
				{
					cProgLecF = 4.0;
				}
				else if (cProgLecF >= 93 && cProgLecF <= 96)
				{
					cProgLecF = 3.5;
				}
				else if (cProgLecF >= 89 && cProgLecF <= 92)
				{
					cProgLecF = 3.0;
				}
				else if (cProgLecF >= 85 && cProgLecF <= 88)
				{
					cProgLecF = 2.5;
				}
				else if (cProgLecF >= 80 && cProgLecF <= 84)
				{
					cProgLecF = 2.0;
				}
				else if (cProgLecF >= 75 && cProgLecF <= 79)
				{
					cProgLecF = 1.5;
				}
				else if (cProgLecF >= 70 && cProgLecF <= 74)
				{
					cProgLecF = 1.0;
				}
				else if (cProgLecF < 70 && cProgLecF > 0)
				{
					cProgLecF = 0.5;
				}
				else
				{
					cProgLecF = 0.0;
				}
			}

			// COMPROG LAB MIDTERM GRADE CONVERSION
			{
				if (cProgLabM >= 97 && cProgLabM <= 100)
				{
					cProgLabM = 4.0;
				}
				else if (cProgLabM >= 93 && cProgLabM <= 96)
				{
					cProgLabM = 3.5;
				}
				else if (cProgLabM >= 89 && cProgLabM <= 92)
				{
					cProgLabM = 3.0;
				}
				else if (cProgLabM >= 85 && cProgLabM <= 88)
				{
					cProgLabM = 2.5;
				}

				else if (cProgLabM >= 80 && cProgLabM <= 84)
				{
					cProgLabM = 2.0;
				}

				else if (cProgLabM >= 75 && cProgLabM <= 79)
				{
					cProgLabM = 1.5;
				}

				else if (cProgLabM >= 70 && cProgLabM <= 74)
				{
					cProgLabM = 1.0;
				}
				else if (cProgLabM < 70 && cProgLabM > 0)
				{
					cProgLabM = 0.5;
				}
				else
				{
					cProgLabM = 0.0;
				}
			}

			// COMPROG LAB FINAL GRADE CONVERSION
			{
				if (cProgLabF >= 97 && cProgLabF <= 100)
				{
					cProgLabF = 4.0;
				}
				else if (cProgLabF >= 93 && cProgLabF <= 96)
				{
					cProgLabF = 3.5;
				}
				else if (cProgLabF >= 89 && cProgLabF <= 92)
				{
					cProgLabF = 3.0;
				}
				else if (cProgLabF >= 85 && cProgLabF <= 88)
				{
					cProgLabF = 2.5;
				}
				else if (cProgLabF >= 80 && cProgLabF <= 84)
				{
					cProgLabF = 2.0;
				}
				else if (cProgLabF >= 75 && cProgLabF <= 79)
				{
					cProgLabF = 1.5;
				}
				else if (cProgLabF >= 70 && cProgLabF <= 74)
				{
					cProgLabF = 1.0;
				}
				else if (cProgLabF < 70 && cProgLabF > 0)
				{
					cProgLabF = 0.5;
				}
				else
				{
					cProgLabF = 0.0;
				}
			}

			// PE MIDTERM GRADE CONVERSION
			{
				if (peM >= 97 && peM <= 100)
				{
					peM = 4.0;
				}
				else if (peM >= 93 && peM <= 96)
				{
					peM = 3.5;
				}
				else if (peM >= 89 && peM <= 92)
				{
					peM = 3.0;
				}
				else if (peM >= 85 && peM <= 88)
				{
					peM = 2.5;
				}
				else if (peM >= 80 && peM <= 84)
				{
					peM = 2.0;
				}
				else if (peM >= 75 && peM <= 79)
				{
					peM = 1.5;
				}
				else if (peM >= 70 && peM <= 74)
				{
					peM = 1.0;
				}
				else if (peM < 70 && peM > 0)
				{
					peM = 0.5;
				}
				else
				{
					peM = 0.0;
				}
			}

			// PE FINAL GRADE CONVERSION
			{
				if (peF >= 97 && peF <= 100)
				{
					peF = 4.0;
				}
				else if (peF >= 93 && peF <= 96)
				{
					peF = 3.5;
				}
				else if (peF >= 89 && peF <= 92)
				{
					peF = 3.0;
				}
				else if (peF >= 85 && peF <= 88)
				{
					peF = 2.5;
				}
				else if (peF >= 80 && peF <= 84)
				{
					peF = 2.0;
				}
				else if (peF >= 75 && peF <= 79)
				{
					peF = 1.5;
				}
				else if (peF >= 70 && peF <= 74)
				{
					peF = 1.0;
				}
				else if (peF < 70 && peF > 0)
				{
					peF = 0.5;
				}
				else
				{
					peF = 0.0;
				}
			}

			// PPE MIDTERM GRADE CONVERSION
			{
				if (ppeM >= 97 && ppeM <= 100)
				{
					ppeM = 4.0;
				}
				else if (ppeM >= 93 && ppeM <= 96)
				{
					ppeM = 3.5;
				}
				else if (ppeM >= 89 && ppeM <= 92)
				{
					ppeM = 3.0;
				}
				else if (ppeM >= 85 && ppeM <= 88)
				{
					ppeM = 2.5;
				}
				else if (ppeM >= 80 && ppeM <= 84)
				{
					ppeM = 2.0;
				}
				else if (ppeM >= 75 && ppeM <= 79)
				{
					ppeM = 1.5;
				}
				else if (ppeM >= 70 && ppeM <= 74)
				{
					ppeM = 1.0;
				}
				else if (ppeM < 70 && ppeM > 0)
				{
					ppeM = 0.5;
				}
				else
				{
					ppeM = 0.0;
				}
			}

			// PPE FINAL GRADE CONVERSION
			{
				if (ppeF >= 97 && ppeF <= 100)
				{
					ppeF = 4.0;
				}
				else if (ppeF >= 93 && ppeF <= 96)
				{
					ppeF = 3.5;
				}
				else if (ppeF >= 89 && ppeF <= 92)
				{
					ppeF = 3.0;
				}
				else if (ppeF >= 85 && ppeF <= 88)
				{
					ppeF = 2.5;
				}
				else if (ppeF >= 80 && ppeF <= 84)
				{
					ppeF = 2.0;
				}
				else if (ppeF >= 75 && ppeF <= 79)
				{
					ppeF = 1.5;
				}
				else if (ppeF >= 70 && ppeF <= 74)
				{
					ppeF = 1.0;
				}
				else if (ppeF < 70 && ppeF > 0)
				{
					ppeF = 0.5;
				}
				else
				{
					ppeF = 0.0;
				}
			}

			// RPH MIDTERM GRADE CONVERSION
			{
				if (rphM >= 97 && rphM <= 100)
				{
					rphM = 4.0;
				}
				else if (rphM >= 93 && rphM <= 96)
				{
					rphM = 3.5;
				}
				else if (rphM >= 89 && rphM <= 92)
				{
					rphM = 3.0;
				}
				else if (rphM >= 85 && rphM <= 88)
				{
					rphM = 2.5;
				}
				else if (rphM >= 80 && rphM <= 84)
				{
					rphM = 2.0;
				}
				else if (rphM >= 75 && rphM <= 79)
				{
					rphM = 1.5;
				}
				else if (rphM >= 70 && rphM <= 74)
				{
					rphM = 1.0;
				}
				else if (rphM < 70 && rphM > 0)
				{
					rphM = 0.5;
				}
				else
				{
					rphM = 0.0;
				}
			}

			// RPH FINAL GRADE CONVERSION
			{
				if (rphF >= 97 && rphF <= 100)
				{
					rphF = 4.0;
				}
				else if (rphF >= 93 && rphF <= 96)
				{
					rphF = 3.5;
				}
				else if (rphF >= 89 && rphF <= 92)
				{
					rphF = 3.0;
				}
				else if (rphF >= 85 && rphF <= 88)
				{
					rphF = 2.5;
				}
				else if (rphF >= 80 && rphF <= 84)
				{
					rphF = 2.0;
				}
				else if (rphF >= 75 && rphF <= 79)
				{
					rphF = 1.5;
				}
				else if (rphF >= 70 && rphF <= 74)
				{
					rphF = 1.0;
				}
				else if (rphF < 70 && rphF > 0)
				{
					rphF = 0.5;
				}
				else
				{
					rphF = 0.0;
				}
			}

			// STS MIDTERM GRADE CONVERSION
			{
				if (stsM >= 97 && stsM <= 100)
				{
					stsM = 4.0;
				}
				else if (stsM >= 93 && stsM <= 96)
				{
					stsM = 3.5;
				}
				else if (stsM >= 89 && stsM <= 92)
				{
					stsM = 3.0;
				}
				else if (stsM >= 85 && stsM <= 88)
				{
					stsM = 2.5;
				}
				else if (stsM >= 80 && stsM <= 84)
				{
					stsM = 2.0;
				}
				else if (stsM >= 75 && stsM <= 79)
				{
					stsM = 1.5;
				}
				else if (stsM >= 70 && stsM <= 74)
				{
					stsM = 1.0;
				}
				else if (stsM < 70 && stsM > 0)
				{
					stsM = 0.5;
				}
				else
				{
					stsM = 0.0;
				}
			}

			// STS FINAL GRADE CONVERSION
			{
				if (stsF >= 97 && stsF <= 100)
				{
					stsF = 4.0;
				}
				else if (stsF >= 93 && stsF <= 96)
				{
					stsF = 3.5;
				}
				else if (stsF >= 89 && stsF <= 92)
				{
					stsF = 3.0;
				}
				else if (stsF >= 85 && stsF <= 88)
				{
					stsF = 2.5;
				}
				else if (stsF >= 80 && stsF <= 84)
				{
					stsF = 2.0;
				}
				else if (stsF >= 75 && stsF <= 79)
				{
					stsF = 1.5;
				}
				else if (stsF >= 70 && stsF <= 74)
				{
					stsF = 1.0;
				}
				else if (stsF < 70 && stsF > 0)
				{
					stsF = 0.5;
				}
				else
				{
					stsF = 0.0;
				}
			}

			//DISPLAY STUDENT INFO
			cout << "----------------------------------------------------------------\n";
			cout << "| Name	     || " << fullName << "								 \n";
			cout << "----------------------------------------------------------------\n";
			cout << "| Student ID || " << studId << "								 \n";
			cout << "----------------------------------------------------------------\n";
			cout << "| Section    || " << section << "								 \n";
			cout << "----------------------------------------------------------------\n";
			cout << "\n";
			cout << "\n";
			cout << fixed << setprecision(1); // THIS SET ALL THE GRADES WITH 1 DECIMAL PLACE ONLY


			// COMPUTING THE AVERAGE PER SUBJECT
			// CONVERT THE AVERAGE GRADE TO GPA 
			// ROUND OFF THE AVERAGE GRADE 

			// COMPUTING ITC LEC AVERAGE
			itcLecAve = (itcLecM + itcLecF) / 2;
			if (fmod(itcLecAve, 1.0) == 0.5) {
				itcLecAveDis = itcLecAve;
			}
			else if (fmod(itcLecAve, 1.0) == 0.25) {
				itcLecAveDis = floor(itcLecAve) + 0.5;
			}
			else {
				itcLecAveDis = ceil(itcLecAve);
			}

			// COMPUTING ITC LAB AVERAGE
			itcLabAve = (itcLabM + itcLabF) / 2;
			if (fmod(itcLecAve, 1.0) == 0.5) {
				itcLabAveDis = itcLecAve;
			}
			else if (fmod(itcLabAve, 1.0) == 0.25) {
				itcLabAveDis = floor(itcLabAve) + 0.5;
			}
			else {
				itcLabAveDis = ceil(itcLabAve);
			}

			//Computing Computer Programming Lec Average
			cProgLecAve = (cProgLecM + cProgLecF) / 2;
			if (fmod(cProgLecAve, 1.0) == 0.5) {
				cProgLecAveDis = cProgLecAve;
			}
			else if (fmod(cProgLecAve, 1.0) == 0.25) {
				cProgLecAveDis = floor(cProgLecAve) + 0.5;
			}
			else {
				cProgLecAveDis = ceil(cProgLecAve);
			}

			// Computing Computer Programming Lab Average
			cProgLabAve = (cProgLabM + cProgLabF) / 2;
			if (fmod(cProgLabAve, 1.0) == 0.5) {
				cProgLabAveDis = cProgLabAve;
			}
			else if (fmod(cProgLabAve, 1.0) == 0.25) {
				cProgLabAveDis = floor(cProgLabAve) + 0.5;
			}
			else {
				cProgLabAveDis = ceil(cProgLabAve);
			}

			// Computing Physical Education Average
			peAve = (peM + peF) / 2;
			if (fmod(peAve, 1.0) == 0.5) {
				peAveDis = peAve;
			}
			else if (fmod(peAve, 1.0) == 0.25) {
				peAveDis = floor(peAve) + 0.5;
			}
			else {
				peAveDis = ceil(peAve);
			}

			// COMPUTING PPE AVERAGE
			ppeAve = (ppeM + ppeF) / 2;
			if (fmod(ppeAve, 1.0) == 0.5) {
				ppeAveDis = ppeAve;
			}
			else if (fmod(ppeAve, 1.0) == 0.25) {
				ppeAveDis = floor(ppeAve) + 0.5;
			}
			else {
				ppeAveDis = ceil(ppeAve);
			}

			// COMPUTING RPH AVERAGE
			rphAve = (rphM + rphF) / 2;
			if (fmod(rphAve, 1.0) == 0.5) {
				rphAveDis = rphAve;
			}
			else if (fmod(rphAve, 1.0) == 0.25) {
				rphAveDis = floor(rphAve) + 0.5;
			}
			else {
				rphAveDis = ceil(rphAve);
			}

			//COMPUTING STS AVERAGE
			stsAve = (stsM + stsF) / 2;
			if (fmod(stsAve, 1.0) == 0.5) {
				stsAveDis = stsAve;
			}
			else if (fmod(stsAve, 1.0) == 0.25) {
				stsAveDis = floor(stsAve) + 0.5;
			}
			else {
				stsAveDis = ceil(stsAve);
			}

			// GPA COMPUTATION
			gpa = (itcLecAveDis + itcLabAveDis + cProgLecAveDis + cProgLabAveDis + peAveDis + ppeAveDis + rphAveDis + stsAveDis) / 8;
			if (fmod(gpa, 1.0) == 0.5) {
				gpaDis = gpa;
			}
			else if (fmod(gpa, 1.0) == 0.25) {
				gpaDis = floor(gpa) + 0.5;
			}
			else {
				gpaDis = ceil(gpa);
			}

			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||             Course Title                ||   Midterm   ||   Finals   ||  Average Per Subject  ||\n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||     Introduction to Computing (LEC)     ||     " << itcLecM << "     ||     " << itcLecF << "    ||         " << itcLecAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||     Introduction to Computing (LAB)     ||     " << itcLabM << "     ||     " << itcLabF << "    ||         " << itcLabAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||       Computer Programming 1 (LEC)      ||     " << cProgLecM << "     ||     " << cProgLecF << "    ||         " << cProgLecAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||       Computer Programming 1 (LAB)      ||     " << cProgLabM << "     ||     " << cProgLabF << "    ||         " << cProgLabAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||           Physical Education 1          ||     " << peM << "     ||     " << peF << "    ||         " << peAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "|| Personal and Professional Effectiveness ||     " << ppeM << "     ||     " << ppeF << "    ||         " << ppeAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||      Readings in Philippine History     ||     " << rphM << "     ||     " << rphF << "    ||         " << rphAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||      Science Technology and Society     ||     " << stsM << "     ||     " << stsF << "    ||         " << stsAveDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			cout << "||            Grade Point Average                                       ||         " << gpaDis << "           || \n";
			cout << "---------------------------------------------------------------------------------------------------\n";
			system("pause");
			system("cls");

			break;

		case 3: // view grade conversion guide
			system("pause");
			system("cls");

			cout << "---------------------------------\n";
			cout << "||   Grade Conversion Guide    ||\n";
			cout << "---------------------------------\n";
			cout << "|| 97-100 || 4.0               ||\n";
			cout << "|| 93-96  || 3.5               ||\n";
			cout << "|| 89-92  || 3.0               ||\n";
			cout << "|| 85-88  || 2.5               ||\n";
			cout << "|| 80-84  || 2.0               ||\n";
			cout << "|| 75-79  || 1.5               ||\n";
			cout << "|| 70-74  || 1.0               ||\n";
			cout << "|| 0.5    || Below 70          ||\n";
			cout << "|| 0.0    || Incomplete        ||\n";
			cout << "---------------------------------\n";
			system("pause");
			system("cls");

			break;
		}
	} while (mmChoice != 4);
	cout << "----------------------------------------------------------------\n";
	cout << "||   Thank you for patronizing qt girliepop grading system!   ||\n";
	cout << "----------------------------------------------------------------\n";
	return 0;
}