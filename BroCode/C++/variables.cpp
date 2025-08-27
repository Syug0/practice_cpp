#include <iostream>

int main(){
    
    //integer (whole number)
    int age = 25;
    int year = 2025;
    int days = 7;

    //double (decimal number)
    double price = 10.99;
    double gpa = 3.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    //string (text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}