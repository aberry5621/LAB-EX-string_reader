//
//  main.cpp
//  Lab Exercise 4.21 - Check Strings
//
//  Created by ax on 9/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main() {

	string input_string = " ";
	string final_output = "Your status is: ";

	cout << "Enter your major and status code (e.g.: M1): ";
	getline(cin, input_string);

	char position1 = input_string[0];
	char position2 = input_string[1];

	// trick program into making text input into number
	int status = static_cast<int>(position2 - 48);

	switch (position1) {
		case 'M':
			final_output += "Mathmatics ";
			break;
		case 'C':
			final_output += "Computer Science ";
			break;
		case 'I':
			final_output += "Information Technology ";
			break;
		default:
			final_output += "Err: Invalid Major Code\n";
			break;
	}

	switch (status) {
		case 1:
			final_output += "Freshie";
			break;
		case 2:
			final_output += "Sophmoore";
			break;
		case 3:
			final_output += "Joonior";
			break;
		case 4:
			final_output += "Senior";
			break;
		default:
			final_output += "Err: Invalid Status Code";
			break;
		}

	cout << final_output;

	return 0;
}
