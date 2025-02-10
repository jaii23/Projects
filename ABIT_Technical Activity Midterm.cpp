//Technical Activity Midterm
//Jirha C. Abit		TX02
#include <iostream>
#include <string>
using namespace std;



//welcoming users and display instructions
struct Quiz {
	string fullName;
	string userAnswer[10];
	int attempts = 0;
	int finalScore[10];
};

//display welcome greetings and instructions
void DisplayIntro() {
	cout << "======================================================\n"
		<< "||  Welcome to Language Translation Practice Tool!  ||\n"
		<< "======================================================\n"
		<< "You will be given a word or phrase in English and you'll need to answer its Filipino translation.\n"
		<< "The quiz is composed of 10 items.\n"
		<< "Keep in mind that punctuations, proper capitalization, and even spaces after your answers matter here.\n"
		<< "Then, best of luck!" << endl;
	system("pause");
	system("cls");
}

//save user info 
void UserInfo(string& fullName) {
	cout << "Enter full name: ";
	getline(cin, fullName);
	cout << "Welcome " << fullName << "!\n";
	cout << "Moving on to the quiz now.......\n";
}

//running quiz 
int UserTranslation(string englishPhrases[], string filipinoTranslation[], string userAnswer[], int& userScore) {
	Quiz user;
	cout << "!!!! QUIZ ON-GOING !!!!\n";
	cout << "Mind your capitalizations and punctuations.\n"
		<< "TIP: Don't put spaces after your translation.\n";

	//reset user's score
	userScore = 0;

	for (int i = 0; i < 10; i++) {
		cout << "\n" << i + 1 << ". " << "English word/s: " << englishPhrases[i] << endl
			<< "Enter translation: ";
		getline(cin, userAnswer[i]);
		
		if (userAnswer[i] == filipinoTranslation[i]) {
			userScore++;
		}
	}
	user.finalScore[user.attempts] = userScore;
	return userScore;
}

//function for displaying user score and feedback
void DisplayUserScore(int userScore) {
	system("cls");
	cout << "You got " << userScore << " out of 10!\n";
	if (userScore == 10) {
		cout << "Congratulations! You got a perfect score!"
			<< "\nAll your hard work was worth it. Great job!\n";
	}
	else if (userScore >= 7 && userScore <= 9) {
		cout << "You got a pretty high score! Great job!\n"
			<< "Keep up the good work sis! Maybe your next retake will be a perfect score!\n";
	}
	else if (userScore >= 5 && userScore <= 6) {
		cout << "You didn't get a passing score. You need more practice. "
			<< "\nMaybe review some more? You can retake the quiz anytime!\n";
	}
	else if (userScore >= 0 && userScore <= 4) {
		cout << "That was a low one. You should read more "
			<< "and then retake the quiz until you get at least a passing score!"
			<< "\nYou can do it!\n";
	}
}

//display correct translations for user's wrong translations
void DisplayCorrectTranslations(string englishPhrases[], string filipinoTranslation[], string userAnswer[], int userScore) {
	system("cls");
	if (userScore < 10) {

		cout << "Here are the correct translations for your wrong answers: \n";

		for (int i = 0; i < 10; i++) {
			if (userAnswer[i] != filipinoTranslation[i]) {
				cout << "\n" << i + 1 << ". English word/s: " << englishPhrases[i] << endl
					<< "Correct Translation: " << filipinoTranslation[i] << endl
					<< "Your Translation: " << userAnswer[i] << endl;
			}
		}
	}
}


//Reset user's answers 
void ResetUserTranslations(string userAnswer[]) {
	for (int i = 0; i < 10; i++) {
		userAnswer[i] = "";
	}
}
//Main Function
int main() {
	int userScore = 0, userChoice, attempts = 0, previousScores[10];
	Quiz user;

	//array for english phrases
	string englishPhrases[10] = { "Noun", "Rumbling", "Commercial", "Wait me there.", "Try hard", "Good morning!",
									"Good afternoon!", "Just a moment.", "Goodbye!", "Until next time." };

	//array for filipino translation 
	string filipinoTranslation[10] = { "Pangngalan", "Dumadagundong","Patalastas", "Hintayin mo ako riyan.", "Magsumikap",
							"Magandang umaga!", "Magandang tanghali!", "Sandali lang.", "Paalam!", "Hanggang sa muli." };


	//lagay do-while here
	DisplayIntro();
	UserInfo(user.fullName);
	system("pause");
	system("cls");

	do {
		ResetUserTranslations(user.userAnswer);
		
		//quiz on-going
		UserTranslation(englishPhrases, filipinoTranslation, user.userAnswer, userScore);
		user.finalScore[user.attempts] = userScore;
		user.attempts++;

		DisplayUserScore(userScore);
		system("pause");

		//comparing wrong answers to correct translations
		DisplayCorrectTranslations(englishPhrases, filipinoTranslation, user.userAnswer, userScore);



		//ask if user want to exit
		system("pause");
		system("cls");
		cout << "Done with the quiz? [1]-YES , [0]-NO\n";
		cin >> userChoice;
		cin.ignore();
		system("cls");

	} while (userChoice != 1);

	//outro: bye-bye
	cout << "Thank you for using Language Translation Practice Tool!\n"
		<< "I hope you had learned a lot and had a great experience with us!\n";


}



