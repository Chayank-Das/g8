#include <iostream>
using namespace std;

int main()
{
    int weekDay;
    cout << "Enter day number: ";
    cin >> weekDay;
    if (weekDay == 1)
        cout << "Monday";
    else if (weekDay == 2)
        cout << "Tuesday";
    else if (weekDay == 3)
        cout << "Wednesday";
    else if (weekDay == 4)
        cout << "Thursday";
    else if (weekDay == 5)
        cout << "Friday";
    else if (weekDay == 6)
        cout << "Saturday";
    else if (weekDay == 7)
        cout << "Sunday";
    else
        cout << "The number is invalid";
return 0;
}
