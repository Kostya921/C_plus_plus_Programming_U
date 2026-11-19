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

    double** Arr = new double*[4];
    for (int i = 0; i < 4; i++) {
        Arr[i] = new double[3];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            Arr[i][j] = numbers(gen);
        }
    }


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


    double* SumArr = new double[4];
    

    for (int i = 0; i < 4; i++) {
        
        //-----------
        //auto Max = max_element(Arr, Arr + ArrSize);
        //auto Max = max_element(Arr[i], Arr[i] + 3); // find max element in each row
    
        //cout << *Max << endl;
        //-----------


        double sum = 0.0;

        for (int j = 0; j < 3; j++) {
            sum += Arr[i][j];
        }

        cout << "Sum of row " << i << ": " << sum << endl;

        SumArr[i] = sum;

    }


    auto Max = max_element(SumArr, SumArr + 4);

    for (int i = 0; i < 4; i++) {
        
        //cout << SumArr[i] << " ";

        if (SumArr[i] == *Max) {
            cout << "\nMaximum sum: " << *Max << " at row " << i << endl;
        }
        
    }


    for (int i = 0; i < 4; i++) {
        delete[] Arr[i];
    }

    delete[] Arr;

    
    delete[] SumArr;

}


int main()
{

    task1();


    return 0;
}
