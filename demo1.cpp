#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


struct WasteRecord {
    string date;
    float plasticWeight;
    float paperWeight;
    float totalCarbon;
};


float calculateCarbon(float plastic, float paper) {
    
    return (plastic * 6.0) + (paper * 1.5);
}

void showTips(float score) {
    cout << "\n--- Green Tips ---" << endl;
    if (score > 10) {
        cout << "Warning: Your carbon footprint is high! Try using reusable bags." << endl;
    } else {
        cout << "Great job! You are living an eco-friendly life." << endl;
    }
}

int main() {
    WasteRecord record;
    int choice;

    cout << "========================================" << endl;
    cout << "   WELCOME TO ECO-TRACK MANAGER" << endl;
    cout << "========================================" << endl;

    while (true) {
        cout << "\n1. Log Daily Waste\n2. View Previous Records\n3. Exit\nEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Date (DD-MM-YYYY): ";
            cin >> record.date;
            cout << "Plastic Waste (in kg): ";
            cin >> record.plasticWeight;
            cout << "Paper Waste (in kg): ";
            cin >> record.paperWeight;

            record.totalCarbon = calculateCarbon(record.plasticWeight, record.paperWeight);

            
            ofstream outFile("records.txt", ios::app);
            outFile << record.date << " " << record.plasticWeight << " " << record.paperWeight << " " << record.totalCarbon << endl;
            outFile.close();

            cout << "\nData Saved! Your Carbon Score for today: " << record.totalCarbon << " kg CO2" << endl;
            showTips(record.totalCarbon);

        } else if (choice == 2) {
            ifstream inFile("records.txt");
            string d;
            float pl, pa, c;
            cout << "\n--- History ---" << endl;
            cout << "Date | Plastic | Paper | CO2 Score" << endl;
            while (inFile >> d >> pl >> pa >> c) {
                cout << d << " | " << pl << "kg | " << pa << "kg | " << c << endl;
            }
            inFile.close();
        } else {
            break;
        }
    }

    return 0;
}