#include<iostream> // library

using namespace std; //makes using cin and cout easier
int main() { //begining of the code

	int taleggio = 0; // these are the varables that will be used in the code
	int cotija = 0;
	int roquefort = 0;
	int gouda = 0;
	char input;

	//question 1
	cout << "what is your favorite colour?" << endl; //asks user what their favirite color is
	cout << "y-yellow, b-black, g-green, w-white" << endl; //gives the user their options
	cin >> input; //store the users input
	if (input == 'w') //checks the input the user chose
		taleggio += 2; //adds two to talegio
	else if (input == 'g')
		cotija += 1;
	else if (input == 'b')
		roquefort += 4;
	else if (input == 'y')
		gouda += 3;

	//question 2
	cout << "do you prefer sweet or sour food?" << endl;
	cout << "w-sweet, s-sour, v- very sour, m- more sweet" << endl;
	cin >> input;
	if (input == 'w') 
		cotija += 2;
	else if (input == 'm')
		gouda += 4;
	else if (input == 's') 
		taleggio += 3;
	else if (input == 'v')
		roquefort += 1;
	

	//question 3
	cout << "what animal do you perfer?" << endl;
	cout << "c-cow, s- sheep, b- brown cow, m- minecraft sheep" << endl;
	cin >> input;
	if (input == 'c') 
		taleggio += 2;
	else if (input == 'm')
		cotija += 3;
	else if (input == 'b')
		gouda += 1;
	else if (input == 's') 
		roquefort += 2;


	//qustion 4
	cout << "what is your favorite shape?" << endl;
	cout << "r-rectangle, c-circle, l-line, t-triangle" << endl;
	cin >> input;
	if (input == 'r')
		taleggio += 1;
	else if (input == 'c')
		gouda += 2;
	else if (input == 'l')
		cotija += 4;
	else if (input == 't')
		roquefort += 3;

	//question 5
	cout << "what place do you perfer to visit?" << endl;
	cout << "m-mexico, i-italy, f-france, n-netherlands" << endl;
	cin >> input;
	if (input == 'm')
		cotija += 0;
	else if (input == 'i')
		taleggio += 0;
	else if (input == 'f')
		roquefort += 0;
	else if (input == 'n')
		gouda += 0;
		
	if (taleggio >= cotija && taleggio >= roquefort && taleggio >= gouda) //this checks if taleggio has more points thatn the other then your are taleggio
		cout << "You are taleggio cheese!" << endl; //tells user what cheese they got

	else if (cotija >= taleggio && cotija >= roquefort && cotija >= gouda)
		cout << "You are cotija cheese!" << endl;

	else if (roquefort >= cotija && roquefort >= taleggio && roquefort >= gouda)
		cout << "You are rouquefort cheese!" << endl;

	else  
		cout << "You are gouda cheese!" << endl;

}
