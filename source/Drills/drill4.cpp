#include "std_lib_facilities.h"

int main(){
	double num1;
	string unit;
	double maxValue = 0;
	double minValue = 0;
	double numTemp;
	string unitTemp;
	double sum = 0;
	int loopCounter = 0;
	vector<string> values;
	while( cin >> num1 >> unit){
		numTemp = num1;
		unitTemp = unit;
		if(unitTemp == "ft"){
			numTemp * 12;
			unitTemp = "in";
		}
		if(unitTemp == "in"){
			numTemp * 2.54;
			unitTemp = "cm";
		}
		if(unitTemp == "cm"){
			numTemp * 100;
			unitTemp = "m";
		}
		if(unitTemp == "m"){
			sum += numTemp;
			values.push_back(to_string(num1)+unit);
			if(loopCounter == 0){
				minValue = numTemp;
				maxValue = numTemp;
				++loopCounter;
				cout << "The largest and the smallest number as well so far" << endl;
			}
			if(loopCounter != 0){
				if(numTemp > maxValue){
					cout << "The largest so far\n";
					maxValue = numTemp;
				}
				else if(numTemp < minValue){
					cout << "The smallest so far\n";
					minValue = numTemp;
				}
				++loopCounter;
			}
		}
		else{
			cout << "Type a legal unit";
		}
	}
	cout << "The given values:\n";
	for (auto value:values){
		cout << value << endl;
	}
	cout << "The sum of the values in meter: " << sum << endl;
}
	
