#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int year;
    cout <<"Enter the year: ";
    cin >> year;

    if (year%400 == 0)
        cout <<"This is Leap year";

    else if (year%4==0 && year%100 != 0)
        cout <<"This is Leap year";

    else
        cout <<"This isn't Leap year";

    getch ();
}

