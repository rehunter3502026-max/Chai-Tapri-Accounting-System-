#include <iostream>
#include <vector>
using namespace std;

struct DayRecord {
    string date;
    int cups;
    float price;
    float expense;
    float profit;
};

class Tapri {
private:
    string name;
    vector<DayRecord> records;

public:
    Tapri(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    float getTotalProfit() {
        float total = 0;
        for (int i = 0; i < records.size(); i++) {
            total += records[i].profit;
        }
        return total;
    }

    void addRecord() {
        DayRecord d;

        cout << "Enter Date: ";
        cin >> d.date;

        cout << "Cups Sold: ";
        cin >> d.cups;

        cout << "Price per Cup: ";
        cin >> d.price;

        cout << "Total Expense: ";
        cin >> d.expense;

        float income = d.cups * d.price;
        d.profit = income - d.expense;

        records.push_back(d);

        cout << "Income: " << income << endl;
        cout << "Profit/Loss: " << d.profit << endl;
    }

    void showReport() {
        if (records.size() == 0) {
            cout << "No records available\n";
            return;
        }

        float totalProfit = getTotalProfit();

        cout << "\nTapri Name: " << name << endl;
        cout << "Days Recorded: " << records.size() << endl;
        cout << "Total Profit: " << totalProfit << endl;
        cout << "Average Profit: " << totalProfit / records.size() << endl;
    }
};

void compareTapris(vector<Tapri> &tapris) {
    if (tapris.size() == 0) {
        cout << "No tapris available\n";
        return;
    }

    float maxProfit = tapris[0].getTotalProfit();
    string bestTapri = tapris[0].getName();

    cout << "\nTapri Profits:\n";

    for (int i = 0; i < tapris.size(); i++) {
        float profit = tapris[i].getTotalProfit();

        cout << tapris[i].getName() << " : " << profit << endl;

        if (profit > maxProfit) {
            maxProfit = profit;
            bestTapri = tapris[i].getName();
        }
    }

    cout << "Best Tapri: " << bestTapri << endl;
}

int main() {
    vector<Tapri> tapris;
    int choice;

    while (true) {
        cout << "\n==== Chai Tapri Accounting System ====\n";
        cout << "1. Add Tapri\n";
        cout << "2. Add Daily Record\n";
        cout << "3. Show Report\n";
        cout << "4. Compare Tapris\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            cout << "Enter Tapri Name: ";
            cin >> name;

            tapris.push_back(Tapri(name));
        }

        else if (choice == 2) {
            if (tapris.size() == 0) {
                cout << "Add a tapri first\n";
                continue;
            }

            cout << "\nSelect Tapri:\n";
            for (int i = 0; i < tapris.size(); i++) {
                cout << i + 1 << ". " << tapris[i].getName() << endl;
            }

            int index;
            cin >> index;

            if (index >= 1 && index <= tapris.size()) {
                tapris[index - 1].addRecord();
            } else {
                cout << "Invalid choice\n";
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < tapris.size(); i++) {
                tapris[i].showReport();
            }
        }

        else if (choice == 4) {
            compareTapris(tapris);
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid option\n";
        }
    }

    return 0;
}
