// Lesson4.1-SimpleSquaresWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {

	int i = 0;
	int square = 0;

	// Write a while loop here:

	while (i < 10) {
		square = i * i;
		std::cout << i << " " << square << std::endl;;
		
		i++;
	}
}
