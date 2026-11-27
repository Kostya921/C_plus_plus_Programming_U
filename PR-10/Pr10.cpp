#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


unsigned int maxElementInInteger(unsigned int number) {

    size_t length = to_string(number).length();

    unsigned int n = pow(10, length - 1);
    unsigned int* Arr = new unsigned int[length];

    //cout << length << endl << endl;

    //cout << number % 10 << " " << number % 100 << " " << number / 10 << " " << number / 100 << "   " << number << endl << endl;

    // Вариант через for, не работает для чисел, в которых есть "0" в начале либо в середине
    /*for (unsigned int i = 0; i < length; i++) {
        //length = to_string(number).length();

        if (number >= 1000000000 && number < 4294967295) {
            Arr[i] = (number / n) % 10;
            number %= 1000000000;
        }
        else if (number >= 100000000 && number < 1000000000) {
            Arr[i] = (number / n) % 10;
            number %= 100000000;
        }
        else if (number >= 10000000 && number < 100000000) {
            Arr[i] = (number / n) % 10;
            number %= 10000000;
        }
        else if (number >= 1000000 && number < 10000000) {
            Arr[i] = (number / n) % 10;
            number %= 1000000;
        }
        else if (number >= 100000 && number < 1000000) {
            Arr[i] = (number / n) % 10;
            number %= 100000;
        }
        else if (number >= 10000 && number < 100000) {
            Arr[i] = (number / n) % 10;
            number %= 10000;
        }
        else if (number >= 1000 && number < 10000) {
            Arr[i] = (number / n) % 10;
            number %= 1000;
        }
        else if (number >= 100 && number < 1000) {
            Arr[i] = (number / n) % 10;
            number %= 100;
        }
        else if (number >= 10 && number < 100) {
            Arr[i] = number / n;
            number %= 10;
        }
        else if (number < 10) {
            Arr[i] = number;
        }
        

        //number = number % n;
        //number = number / n;

        cout << n << " " << length << endl;
        cout << number << endl;

        n /= 10;

    }*/

    for (unsigned int i = 0; i < length; i++) {
        Arr[i] = (number / n) % 10;
        number %= n;
        n /= 10;
        //cout << n << "  number = " << number << endl;
    }


    //cout << "number = " << number << endl;


    /*for (unsigned int i = 0; i < length; i++) {
        cout << Arr[i] << " ";
    }*/

    //cout << endl;

    auto maxElement = max_element(Arr, Arr + length);


    delete[] Arr;
    Arr = nullptr;


    return *maxElement;

}


int main() {

    unsigned int* inputData = new unsigned int[7];
    unsigned int *element = inputData;

    for (int i = 0; i < 7; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> inputData[i];
    }

    cout << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Result for number " << i + 1 << ": " << maxElementInInteger(*(element + i)) << endl;
    }

    
    delete[] inputData;
    inputData = nullptr;
    element = nullptr;

    return 0;
}
