#include <iostream>
#include <string>

using namespace std;

//declaration of function by calling its reference
int swap(int& a, int& b);

int main()
{
    //set constant in case array needs to be changed
    const int NUM = 7;
    //set array based on constant
    int arr[NUM];
    
    //input integers from commandline
    cout << "Enter " << NUM << " integers: ";
    for(int i = 0; i < NUM; i ++)
        cin >> arr[i];
        
    cout << endl;

    //Picks first number from the loop to compare
    for(int i = 0; i < NUM; i ++)
    {
        //Goes through the rest of the loop to compare with the first number
        for(int j = 0; j < NUM; j ++)
        {
            //an if statement to check which is greater
            if(arr[i] < arr[j])
            {
                //if criteria is met, it sends the numbers through the function
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "The array of integers sorted in ascending order is: " << endl;
    for(int i = 0; i < NUM; i ++)
        cout << arr[i] << " ";
    cout << endl;
        
    return 0;
}

int swap(int& a, int& b)
{
    //function then does the swap and returns the value.
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    return a;
}