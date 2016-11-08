#include <iostream>
#include <fstream>

using namespace std;

int swap(int j, int k);

int main()
{
    //CONST int NUM = 7;
    int input[7];
    int temp[7];
    
    cout << "Enter 7 integers: ";
    for(int i = 0; i < 7; i++)
        cin >> input[i];
        
    for(int j = 0; j < 7; j++)
    {
        for(int k = 0; k < 7; k++)
        {
             swap(input[j], input[k]);
        }
    }

   return 0;
}

int swap(int j, int k)
{
    int temp;

    if(j > k)
    {
        temp = j;
        j = k;
        k = temp;
    }
    return j, k;
}

