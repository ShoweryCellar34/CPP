#include <iostream>

class human
{        // A class is a object that contains methods and attributes
    private: // Everything in here can't be accessed through attribute access can only be accessed through methods in the class (Setting values here will make them default for any new instance created) and no need for this keyword because classes assume private by default
        std::string password = "123abc";

        void test()
        {
        }

    public: // Private is assumed by default so no need for private keyword but if you want somthing public do: "public:"
        // Attributes (Setting values here will make them default for any new instance created)
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
        name = x;
        age = y;
        }

        human() { // This empty constructor is here so not using a constructor and manualy entering values will work

        }

};

class humanV2 : public human { // Create a class that inherits from the human class, that means that this class has all the attributes and methods of the human class
    private:
        bool isFlying = false;
    public:

    void toggleFly() {
        if(isFlying) {
            std::cout << name << " gracefully lands on the ground\n";
        } else {
            std::cout << name << " starts to fly!\n";
        }
    
    isFlying = !isFlying;

    }

    humanV2(std::string x, int y, bool paysTaxes) { // Constructors are not inherited from the parent class
        name = x;
        age = y;
        this -> paysTaxes = paysTaxes;
    }

    humanV2(std::string x, int y) {
    name = x;
    age = y;
    }

    humanV2() {

    }

};

struct test
{ // A struct of structure is exactly the same as a class but it assumes public by default (a struct is used mostly for basic data storage and manipulation while classed are more commonly used for more complicated tasks, structs can inherit from classes)
    std::string publicString = "this string is public";
    void publicFunc()
    {
    }
    private:
        std::string testString = "test";
        void privateFunc()
        {
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

    humanV2 human4;
    human4.name = "Subject no.4";
    human4.age = 157;
    human4.stats();
    human4.toggleFly();
    human4.toggleFly();

    humanV2 human5("Subject no.5", 62, false);
    human5.stats();
    human5.toggleFly();
    human5.toggleFly();

    return 0;

}
