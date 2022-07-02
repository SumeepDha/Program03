#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

string total;
char* point;
char lst1[] = "";
string choice;
double coust1;
double coust2;
double coust3;
double coust4;
double coust5;
double coust6;
double coust7;
double coust8;
double coust9;
double coust10;


int main() {


    ifstream file;
    file.open("input.txt");
    string line;

    cout << "1. Print all coustomers data\n2. Print names and ids\n3. Print accounts total\n4. Enter q/Q to quit\n";
    cout << "Enter you choice or Q to quit: ";
    cin >> choice;
    cout << "\n";

    while (choice != "1" && choice != "2" && choice != "3" && choice != "4") {
        cout << "\nWrong input. Try again. \n\n";
        cout << "1. Print all coustomers data\n2. Print names and ids\n3. Print accounts total\n4. Enter q/Q to quit\n";
        cout << "Enter your choice or Q to quit: ";
        cin >> choice;
        cout << "\n";



    }

    if (choice == "1") {
        cout << "ID" << "    First" << "     Last" << "      Savings account" << "  Checking account" << endl;
        while (file.good()) {
            getline(file, line);

            cout << line << endl;
        }
        file.close();
    }


    if (choice == "2") {
        cout << "First" << "      Last" << endl;
        while (file.good()) {
            getline(file, line);
            cout << line[6] << line[7] << line[8] << line[9] << line[10] << line[11] << line[12];
            cout << "    " << line[16] << line[17] << line[18] << line[19] << line[20] << line[21] << line[22] << line[23] << line[24] << endl;
        }
        file.close();
    }

    if (choice == "3") {
        coust1 = 810.2 + 101.10;
        coust2 = 100.0 + 1294.90;
        coust3 = 333.90 + 7483.77;
        coust4 = 1930.02 + 4473.20;
        coust5 = 932.0 + 2334.30;
        coust6 = 33.0 + 0.0;
        coust7 = 334.90 + 777.5;
        coust8 = 8843.2 + 88.90;
        coust9 = 3994.09 + 2343.30;
        coust10 = 99.0 + 8433.04;

        cout << "ID" << "     " << "Savings Account" << "      Checkings Account" << "    Total" << endl;
        while (file.good()) {
            getline(file, line);
            cout << line[0] << line[1];
            cout << "     " << line[29] << line[30] << line[31] << line[32] << line[33] << line[34] << line[35] << line[36];
            cout << "             " << line[43] << line[44] << line[45] << line[46] << line[47] << line[48] << line[49] << line[50] << endl;


        }
        total = coust1 + coust2 + coust3 + coust4 + coust5 + coust6 + coust7 + coust8 + coust9 + coust10;
        cout << "******************************\n";
        cout << "The total amount is " << total << endl;
        cout << "******************************";
    }

    if (choice == "4") {
        return 0;
    }
}