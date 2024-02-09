// Game Quiz Indonesian Cpp
// https://https://www.geeksforgeeks.org/quiz-game-in-c/
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_A;
	string Answer_B;
	string Answer_C;
	string Answer_D;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Driver code
int main()
{
	cout << "\tTHE DAILY QUIZ INDONESIAN\t"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		system("cls");
		cout << "Okay Good Bye!" << endl;
		return 0;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// 3 is the position of
	// correct answer
	q1.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q2.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q3.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q4.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q5.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q6.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q7.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q8.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q9.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);
	q10.setValues("Question : ", "Answer A",
				"Answer B", "Answer C",
				"Answer D", 3, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		<< "out of 100" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " quiz!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_A = a1;
	Answer_B = a2;
	Answer_C = a3;
	Answer_D = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_A << endl;
	cout << "2. " << Answer_B << endl;
	cout << "3. " << Answer_C << endl;
	cout << "4. " << Answer_D << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in Alfabet)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherwise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
