#include <iostream>

class human { // A struct with inbuilt functions
    private: // Attributes that are hidden from outside the class (private must go before public), methods in the class can read and write to private attributes these are getters and setters
        std::string password = "123abc";
    public: // Attributes (Defalts can be set)
        std::string name = "Subject no.0";
        int age = 18;
        bool paysTaxes = true;

    void payTaxes(int amount) {
        if(paysTaxes) {
            std::cout << name << " payed $" << amount << " in taxes" << '\n';
        } else {
            std::cout << name << " did not pay $" << amount << " in taxes" << '\n';
        }
    }

    // Methods (functions)
    void stats() {
        if(paysTaxes) {
            if(age >= 18) {
                std::cout << "My name is: " << name << ", I am " << age << " years old and I pay taxes\n";
            } else {
                std::cout << "My name is: " << name << ", I am " << age << " years old and I pay taxes even though I am a child\n";
            }
        } else {
            if(age >= 18) {
                std::cout << "My name is: " << name << ", I am " << age << " years old and I do not pay taxes\n";
            } else {
                std::cout << "My name is: " << name << ", I am " << age << " years old and I do not pay taxes because I am a child\n";
            }
        }
    }

    human(std::string x, int y, bool paysTaxes) { // This is a constructor it is like a function (must have the same name as the class)
        name = x; // Set the name
        age = y; // Set the age
        this -> paysTaxes = paysTaxes; // Because the class attribute has the same name a the constructor arguments we must use "this -> ..."
    }

    human(std::string x, int y) { // This is a overloaded constructor
    name = x; // Set the name
    age = y; // Set the age
    }

    human() { // This empty constructor is here so not using a constructor and manualy entering values will work

    }

};

int main() {

    human human0; // Create a instance of the "human" class called "human0"
    human0.name = "Subject no.0"; // Set name
    human0.age = 12; // Set age
    human0.paysTaxes = false; // Set if they should pay taxes or not
    human0.stats(); // Call the stats method

    human human1;
    human1.name = "Subject no.1";
    human1.age = 41;
    human1.paysTaxes = false;
    human1.stats();

    human human2("Subject no.2", 7, true); // Use the constructor to set the attributes
    human2.stats();

    human human3;
    human3.name = "Subject no.3";
    human3.age = 28;
    // "human3.paysTaxes = true;" no need for this line because the default is "true"
    human3.stats();

    return 0;

}
