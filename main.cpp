#include <iostream>
#include <cmath>
using namespace std;

// Define a class for hexagon
class Hexagon {
private:
    // Data member to store the length of one side of hexagon
    int length;

public:
    // Constructor to initialize the length with the last digit of CNIC
    Hexagon(int cnic=1) : length(cnic) {}

    // Member function to calculate the area of hexagon
    double calcArea() {
        return 1.5 * 1.732 * length; // Formula for the area of hexagon
    }

    // Member function to calculate the perimeter of hexagon
    int calcPeri() {
        return 6 * length; // Formula for the perimeter of hexagon
    }

    // Member function to calculate the sum of angles of hexagon
    int calcAngleSum() {
        return 6 * 120; // Formula for the sum of angles of hexagon
    }

    // Member function to display the area, perimeter, and sum of angles of hexagon
    void display() {
        cout << "Area of hexagon = " << calcArea() << " square units" << endl;
        cout << "Perimeter of hexagon = " << calcPeri() << " units" << endl;
        cout << "Sum of angles of hexagon = " << calcAngleSum() << " degrees" << endl;
    }
};

// Define a class for square
class Square {
private:
    // Data member to store the length of one side of square
    int length;

public:
    // Constructor to initialize the length with the last digit of CNIC + 1
    Square(int cnic=1) : length(cnic + 1) {}

    // Member function to calculate the area of square
    int calcAreaSquare() {
        return length * length; // Formula for the area of square
    }

    // Member function to calculate the perimeter of square
    int calcPeriSquare() {
        return 4 * length; // Formula for the perimeter of square
    }

    // Member function to display the area and perimeter of square
    void display() {
        cout << "Area of square = " << calcAreaSquare() << " square units" << endl;
        cout << "Perimeter of square = " << calcPeriSquare() << " units" << endl;
    }
};

// Main function
int main() {
    int cnic=1;
    Hexagon hex(cnic);

    // Create an object of square class with the CNIC as an argument
    Square sq(cnic);

    // Declare a variable to store the user's choice
    int choice;

    // Create a repeating menu
    do {
        // Display the menu options
        cout << "\nChoose an option:\n";
        cout << "1. Display area, perimeter, and sum of angles of hexagon\n";
        cout << "2. Display area and perimeter of square\n";
        cout << "3. Enter any key to exit\n";

        // Read the user's choice
        cin >> choice;

        // Perform different actions based on the user's choice
        switch (choice) {
        case 1: // If the user chooses 1, display the details of hexagon
            hex.display();
            break;
        case 2: // If the user chooses 2, display the details of square
            sq.display();
            break;
        default: // If the user chooses any other key, exit the program
            cout << "Exiting program\n";
            return 0;
        }
    } while (true); // Repeat the menu until the user exits

    return 0;
}
