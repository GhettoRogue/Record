#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "output.dat";

    // ‡ ―¨αμ Ά δ ©«

    int num_1, num_2;
    cout << "‚Ά¥¤¨β¥ 1 η¨α«®: " << endl;
    cin >> num_1;
    cout << "‚Ά¥¤¨β¥ 2 η¨α«®: " << endl;
    cin >> num_2;

    cout << "“ª ¦¨β¥ ®―¥ΰ ζ¨ξ: + ¨«¨ - " << endl;
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
