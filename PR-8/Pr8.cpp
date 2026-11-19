#include <iostream>
#include <random>
#include <algorithm>

using namespace std;


// dynamic array syntax

/*

int *arr = new int[5]{1, 2, 3, 4, 5};

int* arrZero = new int[n](); // initialize all elements to zero


int* pointer = arr;


cout << *arr << endl; 
cout << *(arr + 1) << endl;


delete[] arr;
delete[] arrZero;


// Хорошая практика: обнулить указатели после удаления
arr = nullptr;
arrZero = nullptr;

*/

//


void task1() {
    
    cout << "----Task 1----" << endl << endl;
    
    random_device rd;
    mt19937 gen(rd());

    uniform_real_distribution<double> numbers(-100.0, 100.0);

    double Arr[4][3] = {
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)}
    };


    cout << "{\n";
    for (int i = 0; i < 4; i++) {
        cout << " { ";
        for (int j = 0; j < 3; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << "}";
        cout << '\n';
    }
    cout << "}\n\n";


    int ArrSize = sizeof(Arr) / sizeof(Arr[0]);

    //cout << "Size of array: " << ArrSize << endl << endl;

    double SumArr[4] = {};

    int SumArrSize = sizeof(SumArr) / sizeof(SumArr[0]);

    //cout << "Size of SumArray: " << SumArrSize << endl << endl;

    for (int i = 0; i < ArrSize; i++) {
        
        //-----------
        //auto Max = max_element(Arr, Arr + ArrSize);
        //auto Max = max_element(Arr[i], Arr[i] + 3); // find max element in each row
    
        //cout << *Max << endl;
        //-----------


        double sum = 0;

        for (int j = 0; j < 3; j++) {
            sum += Arr[i][j];
        }

        cout << "Sum of row " << i << ": " << sum << endl;

        SumArr[i] = sum;
    
    }


    auto Max = max_element(SumArr, SumArr + SumArrSize);

    for (int i = 0; i < SumArrSize; i++) {
        
        //cout << SumArr[i] << " ";

        if (SumArr[i] == *Max) {
            cout << "\nMaximum sum: " << *Max << " at row " << i << endl;
        }
        
    }

}


int main()
{

    task1();


    return 0;
}
