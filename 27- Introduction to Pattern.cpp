#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
int i, row, col, n;

printf("Enter the value of n: ");
scanf("%d", &n);

for (row=1; row<=n; row++)
{
    for (col=1; col<=row; col++)
    {
        cout <<"    " <<col%2;
    }
    cout <<endl;
}

    getch ();
}


