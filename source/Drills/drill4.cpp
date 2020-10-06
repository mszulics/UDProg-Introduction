#include "std_lib_facilities.h"

int main(){
	double num;
	string unit;
	double maxValue;
	double minValue;
	double sum = 0;
	string unitm = "m";
	int loopCounter = 0;
	vector<string> values;
	while( cin >> num >> unit){
		values.push_back(to_string(num)+unit);
		if(unit == "ft"){
			num = num * 0.3048;
			unit = unitm;
		}
		else if(unit == "in"){
			num = num * 0.0254;
			unit = unitm;
		}
		else if(unit == "cm"){
			num = num * 0.01;
			unit = unitm;
		}
		if(unit == unitm){
			sum += num;
			if(loopCounter == 0){
				minValue = num;
				maxValue = num;
				++loopCounter;
				cout << "The largest and the smallest number as well so far" << endl;
			}
			if(loopCounter != 0){
				if(num > maxValue){
					cout << "The largest so far\n";
					maxValue = num;
				}
				else if(num < minValue){
					cout << "The smallest so far\n";
					minValue = num;
				}
				++loopCounter;
			}
		}
		else{
			cout << "Type a legal unit";
		}
	}
	cout << "The given values:\n";
	for (string value:values){
		cout << value << endl;
	}
	cout << "The sum of the values in meter: " << sum << endl;
}
	
