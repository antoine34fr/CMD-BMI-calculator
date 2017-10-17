// let make a simple BMI calculator
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int getfeetfromuser()
{
	std::cout << "Body Mass Index Calculator v0.1.2 " << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your height first digit (in feet) and press enter: 4? 5? 6? ... "; 
	int a; 
	std::cin >> a; 
	return a; 
}

int getinchesfromuser()
{
	std::cout << "Enter your height second digit (in inches - 0 to 11): ";
	int b;
	std::cin >> b;
	return b;
}

int getweightfromuser()
{
	std::cout << "Enter your weight in pounds (lbs): ";
	int c;
	std::cin >> c;
	return c;
}

int main()
{
	int x = getfeetfromuser();
	int y = getinchesfromuser();
	int z = getweightfromuser();

	int totalinches = x * 12 + y;
	double incentimeters = totalinches * 0.0254; 
	double squaredheight = incentimeters * incentimeters; 
	double inkg = z * 0.45;
	double BMI = inkg / squaredheight;

	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << std::endl;
	std::cout << "Your Body Mass Index (BMI) is " << BMI << std::endl; 
	std::cout << std::endl;
	std::cout << "A healthy BMI is comprised between 18.5 and 24.9. " << std::endl;
	std::cout << "Below is considered underweight. Above is considered overweight. Above 30 is obese. " << std::endl;
	std::cout << std::endl; 
	std::cout << "For your information, using the metric system, your weight is " << inkg << " kilograms and your height is " << incentimeters << " meter." << std::endl;
	std::cout << std::endl;
	std::cout << "Press enter to exit the program " << std::endl;

	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user

// for dev purpose
//	std::cout << x << " || " << y << " || " << z << " || " << totalinches << " || " << incentimeters
//		<< " || " << squaredheight << " || " << inkg << " || " << BMI << " || " ;

	return 0;
}

