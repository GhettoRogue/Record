#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "output.dat";

    // ������ � 䠩�

    int num_1, num_2;
    cout << "������ 1 �᫮: " << endl;
    cin >> num_1;
    cout << "������ 2 �᫮: " << endl;
    cin >> num_2;

    cout << "������ ������: + ��� - " << endl;
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
