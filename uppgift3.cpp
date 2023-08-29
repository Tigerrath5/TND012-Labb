/*
 * TND012, Lab1: exercise 3
 * Author:
 * Program to calculate how much electricity was spent and how much to pay for it
 *
 */

#include <iostream>
#include <iomanip>

int main() {
    //Initalize Variables
    constexpr double tax = 1.05; // 1.05 is the tax to apply to the electricity
    constexpr float ten_procent = 0.1;
    constexpr float ninty_procent = 0.9;
    
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
    
    //input pricing for 1 kwh
    std::cout << "Enter regular price of 1 kWh: ";
    float reg_elecPrice;
    std::cin >> reg_elecPrice;
    
    //Initializes a variable storing the total electricity usage
    int totUsage = (curnt_Usage - lastYear_Usage);
    //Prints the result for how much the total electricity usage is
    std::cout << "You have used " << totUsage << " kWh during the last year." << std::endl;
    
    //calculates the electricity price for the 10% of electricity usage that is taxed by 5%
    float taxed_elecPrice = reg_elecPrice * tax;
    //Summs up the total electricity cost for the 10% that is taxed
    float tot_taxedElecCost = totUsage * ten_procent * taxed_elecPrice;
    //Summs up the total overal cost
    float tot_elecCost = totUsage * ninty_procent * reg_elecPrice + tot_taxedElecCost;
    
    //Prints out the results for the total electricity cost
    std::cout << "Total cost = " << std::fixed << std::setprecision(2) << tot_elecCost << " SEK" << std::endl;
    //Prints out the results for the total taxed cost of the electricity in other words the 10% that got taxed
    std::cout << "10% of the used energy costs " << std::fixed << std::setprecision(2) << tot_taxedElecCost << " SEK" << std::endl;
    
    return 0;
}
