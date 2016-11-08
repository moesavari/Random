#include <iostream>
#include <string>
using namespace std;

struct Dog
{
    string Name, Breed;
    bool Neutered;
    char Gender;
    int Age;
};

int main()
{
    Dog myDog;
    char neutered;
    cout << "Enter your dog's name: ";
    cin  >> myDog.Name;
    cout << "Enter your dog's breed: ";
    cin  >> myDog.Breed;
    cout << "Is your dog neutered? (answer 'y' or 'n'): ";
    cin  >> neutered;
    
    if (neutered == 'y')
        myDog.Neutered = true;
    else if (neutered == 'n')
        myDog.Neutered = false;
    
    cout << "Enter your dog's gender (answer 'm' or 'f'): ";
    cin  >> myDog.Gender;
    cout << "Enter your dog's age: ";
    cin  >> myDog.Age;
    
    cout << "Name: " << myDog.Name << endl
         << "Breed: " << myDog.Breed << endl
         << "Neutered: ";
    
    if (myDog.Neutered)
        cout << "Yes";
    else if (!myDog.Neutered)
        cout << "No";
    
    cout << endl << "Gender: ";
    
    if (myDog.Gender == 'f')
        cout << "Female" << endl;
    else if (myDog.Gender == 'm')
        cout << "Male" << endl;
    
    cout << "Age: " << myDog.Age << endl;
    
    return 0;
}

