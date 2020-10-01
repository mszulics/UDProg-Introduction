#include "std_lib_facilities.h"

int main(){

	string first_name;
	cout << "Type your name here: ";
	cin >> first_name;
	cout << "\n";

	cout << "Dear "<<first_name<<", how are you? Im fine.\n";

	string friend_name;
	cout << "Type your friends name here: ";
	cin >> friend_name;
	cout << "Have you seen "<<friend_name<<" lately?\n";

	char friend_sex = 0;
	cout << "Type your friends sex (male - m / female - f): ";
	cin >> friend_sex;
	cout << "\n";

	if(friend_sex == 'm'){
		cout << "If you see "<<friend_name<<", please ask him to call me.\n";
	}
	if(friend_sex == 'f'){
		cout << "If you see "<<friend_name<<", please ask her to call me.\n";
	}

	int age;
	cout << "I hear you just had a birthday. Tell me how old are you: ";
	cin >> age;
	if(age < 0 || age > 110){
		simple_error("Youre kidding!");
	}
	if(age < 12){
		cout << "Next year you will be "<<age+1<<"\n";
	}
	else if(age == 17){
		cout << "Next year you will be able to vote.\n";
	}
	else if(age > 70){
		cout << "I hope you are enjoying retirement.\n";
	}


	cout << "Yours cincerely,\n";
	cout << "\n";
	cout << "Szulics Máté Zsolt";

}