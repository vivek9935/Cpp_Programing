#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string dayOfTheWeek(int day, int month, int year) {
    vector<string> months{
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };

    map<string, int> monthMap;
    for (int i = 0; i < 12; i++) {
        monthMap[months[i]]++;
    }

    map<int, string> dayMap{
        {0, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "Wednesday"},
        {4, "Thursday"}, {5, "Friday"}, {6, "Saturday"}
    };

    int m = monthMap[months[month - 1]];
    int C = year / 100;
    int D = year % 100;
    int k = day;

    if (m < 3) {
        m += 12;
        year--;
    }

    int F = k + ((13 * m + 2) / 5) + D + (D / 4) + (C / 4) - 2 * C;
    int dayIndex = F % 7;

    return dayMap[dayIndex];
}

int main() {
    int day, month, year;
    cout << "Enter the date (day month year): ";
    cin >> day >> month >> year;

    string dayOfWeek = dayOfTheWeek(day, month, year);
    cout << "The day of the week is: " << dayOfWeek << endl;

    return 0;
}