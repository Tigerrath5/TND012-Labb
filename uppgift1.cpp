#include "iostream"

int main()
{
    //Prints a place for the user to enter their desired amount of euro
    std::cout << "Euro: ";
    //Initialize variable for Euro
    double money_Euro;
    
    //Input userdata for desired Euro that will convert to SEK
    std::cin >> money_Euro;
    
    //Exchange rate of Euro as of 28-08-2023
    constexpr double euro_exchange_rate = 11.8771;
    
    //Convert from Euro to SEK
    double money_SEK = euro_exchange_rate * money_Euro;
    
    //Display the result: euro -> SEK
    std::cout << money_Euro << " Euro = " << money_SEK << "SEK\n";
    
    /// ADD CODE for excercise 1.5 below
    //Prints a place for the user to enter their desired amount of SEK
    std::cout << "SEK: ";
    
    //Input userdata for desired SEK that will convert to Euro
    std::cin >> money_SEK;
    
    //Exchange rate of SEK as of 28-08-2023
    constexpr double Sek_exchange_rate = 0.084;
    
    //Convert from SEK to Euro
    money_Euro = Sek_exchange_rate * money_SEK;
    
    //Display the result: SEK -> Euro
    std::cout << money_SEK << " SEK: " << money_Euro << "Euro" << std::endl;
    
    return 0; 
}

