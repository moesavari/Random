#include <iostream>
#include <cmath>

using namespace std;
//Set a constant number out of the functions to be used everywhere.
const int A_CONSTANT = 3;

//Declaring functions.
void functionA(int a[], int constant);
void functionB(int a[], int constant);
void functionC(const int array[], int constant);
void functionD(int& sum);
int functionE(double number); void functionF(int n);

int main( )
{
    int production[A_CONSTANT];
    cout << "This program displays a graph showing\n" 
         << "production for each factory in the company.\n";
    functionA(production, A_CONSTANT);
    functionB(production, A_CONSTANT);
    functionC(production, A_CONSTANT);
    return 0;
}

void functionA(int a[], int constant)
{
    for (int i = 1; i <= constant; i++)
    {
        cout << endl << "Enter production data for plant number " 
             << i << endl;
        functionD(a[i - 1]);
    }
}

void functionD(int& sum)
{
    cout << "Enter number of units produced by each department.\n" 
         << "Append a negative number to the end of the list.\n";
    sum = 0; int next;
    cin >> next;
    while (next >= 0)
    {
        sum = sum + next;
        cin >> next;
    } 
    cout << "Total = " << sum << endl;
}

void functionB(int a[], int constant)
{
    for (int index = 0; index < constant; index++)
         a[index] = functionE(a[index]/1000.0);
}

int functionE(double number) 
{
    return static_cast<int>(floor(number + 0.5));
}

void functionC(const int array[], int constant)
{
    cout << "\nUnits produced in thousands of units:\n";
    for (int i = 1; i <= constant; i++)
    {
        cout << "Factory #" << i << " ";
        functionF(array[i - 1]);
        cout << endl;
    }
}
void functionF(int n) 
{
    for (int count = 1; count <= n; count++) cout << "*";
}

