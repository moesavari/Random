// Example program
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool swapNeeded(string first, string second);

string sort(string first, string second);

int main()
{
    const int SIZE = 5;
    string data[SIZE];
    string outfile;
    
    cout << "Enter output filename: ";
    cin >> outfile;
    
    ofstream myOddStream(outfile);
    
    cout << "Enter in " << SIZE << " words to store in a file: " << endl;
    for(int i = 0; i < SIZE; i++)
        cin >> data[i];
        
    cout << "Outputting words" << endl;
    for(int i = 0; i < SIZE; i++)
        cout << data[i] << endl;
    
    myOddStream.close();
    
    cout << "reading in " << outfile << endl;
    
    ifstream inputFile(outfile);
    if(inputFile.fail())
    {
        cout << "Error" << endl;
        exit(1);
    }
    else
    {
        while(!inputFile.eof())
        {
            string line;
            inputFile >> line;
            cout << line << endl;
        }
        inputFile.close();
    }
    
    return 0;
}

bool swapNeeded(string first, string second)
{
    
    string random; 
    
    if(first.compare(second) < 0)
    {
        cout << "Second string is bigger than first." << endl;
        return true;
        
    }
    else if(first.compare(second) > 0)
    {
        random = sort(first, second);
        cout << random << endl;
        return false;
    }
    else return false;
   

}

string sort(string first, string second)
{
    string temp;
    
    temp = first;
    first = second;
    second = temp;
    
    return first;
}


