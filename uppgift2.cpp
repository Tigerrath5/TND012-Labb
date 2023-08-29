/*
 * TND012, Lab1: exercise 2
 * Author:
 * Program to calculate how much electricity was spent
 *
 */

#include <iostream>

int main() {
    
    //Prints instructions for the user
    std::cout << "Enter electricity meter reading a year ago: ";
    //Initializes a variable to carry the user input for the electricity meter from a year ago
    int lastYear_Usage;
    //saves input data in the variable
    std::cin >> lastYear_Usage;
    
    //Prints instructions for the user
    std::cout << "Enter electricity meter reading now: ";
    //Initializes a variable to carry the user input for the electricity meter from now
    int curnt_Usage;
    //saves input data in the variable
    std::cin >> curnt_Usage;
    
    //Prints the result for how much the total electricity usage is
    std::cout << "You have used " << (curnt_Usage - lastYear_Usage) << " kWh during the last year." << std::endl;
    return 0;
}
