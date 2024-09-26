/*
we can store details related to a student in a struct consisting of his age (int),
 first_name (string), last_name (string) and standard (int).
 */
 //HackerRank

#include <iostream>
#include <string>

struct NewType {
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

    void display() const {
        std::cout << "Student Information:\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "First Name: " << first_name << "\n";
        std::cout << "Last Name: " << last_name << "\n";
        std::cout << "Standard: " << standard << "\n";
    }
};

int main() {
    NewType New1;

    New1.age = 20;
    New1.first_name = "John";
    New1.last_name = "Doe";
    New1.standard = 12;

    New1.display();

    return 0;
}

