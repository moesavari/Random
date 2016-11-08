#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

/*Time taken to sort numbers:
1000: 0.00 seconds
10000: 1.00 seconds
For in-depth testing purposes:
100000: 44.00 seconds
1000000: 47.00 seconds
*/
using namespace std;

//declaration of function by calling its reference
int swap(int& a, int& b);

int main()
{
    //set constant in case array needs to be changed
    const int NUM = 1000;
    //set array based on constant
    int arr[NUM];
    
    //set two variables for when time starts and ends
    time_t start, end;
    
    //create a double variable to get the difference between the start and end
    double Diff;
    
    //setting the seed for random number generation
    srand(time(NULL));
    
    //inputting numbers from the RNG to the array
    for(int i = 0; i < NUM; i ++)
    {
        arr[i] = rand();
        //cout << arr[i] << " ";
    }
    cout << endl;

    //timer starts when the for loop is triggered
    time(&start);
    
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
    
    //timer ends when for loop ends
    time(&end);
    
    //Difference in time is calculated here
    Diff = difftime(end, start);
    
    /*cout << "The array of integers sorted in ascending order is: " << endl;
    for(int i = 0; i < NUM; i ++)
        cout << arr[i] << " ";
    cout << endl;*/
    
    //output the time taken
    cout << fixed << setprecision(2) << "Time taken " << Diff << endl;
    
        
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