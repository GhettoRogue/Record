#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "output.dat";

    int num_1, num_2;
    cout << "Input number1: " << endl;
    cin >> num_1;
    cout << "Input number2: " << endl;
    cin >> num_2;

    cout << "Chose operation: "+" or "-" " << endl;
    char userInput;
    cin >> userInput;

    switch (userInput) {
        case '+': {
            int summ;
            summ = num_1 + num_2;

            ofstream output;
            output.open("output.dat", ios::trunc);

            if (!output.is_open()) {
                cerr << "Error! File not open!" << endl;
                return 1;
            }
            output << " " << num_1 << " +" << " " << num_2 << " = " << summ << endl;

            output.close();
        }
            break;
        case '-': {
            int summ;
            summ = num_1 - num_2;

            ofstream output;
            output.open("output.dat", ios::trunc);

            if (!output.is_open()) {
                cerr << "Error! File not open!" << endl;
                return 1;
            }
            output << " " << num_1 << " -" << " " << num_2 << " = " << summ << endl;

            output.close();
        }
            break;
    }

    return 0;
}
