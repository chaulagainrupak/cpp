#include <iostream>
#include <math.h>

using namespace std;

int hypotenuse, base, height, userCase;
int main()
{

    cout << "Choose your operation for the triangle:" << endl;
    cout << "1: Hypotenuse is unknown." << endl;
    cout << "2: Height is unknown." << endl;
    cout << "3: base is unknown." << endl;

    cin >> userCase;

    if (userCase != 1 || userCase != 2 || userCase != 3)
    {
        cout << "Invalid choice please choose again." << endl;
    }

    switch (userCase){
    case 1:
        cout << "The hypotenuse for your tirangle is unknown " << endl;
        cout << "Input the height for the triangle: " << endl;
        cin >> height;
        cout << "Input the base for the triangle: " << endl;
        cin >> base;

        cout <<"The hypotenuse for the triangle: " << sqrt(height * height + base * base) << endl;
        break;
    case 2:
        cout << "The height for your tirangle is unknown " << endl;
        cout << "Input the hypotenuse for the triangle: " << endl;
        cin >> hypotenuse;
        cout << "Input the base for the triangle: " << endl;
        cin >> base;

        cout << "The base for your triangle: " << sqrt(hypotenuse * hypotenuse - base * base) << endl;
        break;
    case 3:
        cout << "The base for your tirangle is unknown " << endl;
        cout << "Input the hypotenuse for the triangle: " << endl;
        cin >> hypotenuse;
        cout << "Input the height for the triangle: " << endl;
        cin >> height;

        cout << "The height for your tiranlge: " << sqrt(hypotenuse * hypotenuse - height * height) << endl;
        break;
    }
}