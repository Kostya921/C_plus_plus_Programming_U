#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;


int task1() {
    
    cout << "----Task 1----" << endl << endl;
    
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> numbers(-100, 100);

    vector<int> numbersArray = {};

    for (int i = 0; i < 5; i++) {
        int randomNumber = numbers(gen); // number from -100 to 100
        cout << "Random number: " << randomNumber << endl;
        numbersArray.push_back(randomNumber);
    }
    
    cout << "\n";


    cout << "{ ";
    for (int number : numbersArray) {
        cout << number << " ";
    }
    cout << "}";


    cout << "\n\n";


    int c = 0;

    cout << "Positive numbers of array: ";

    for (int number : numbersArray) {
        if (number > 0) {
            cout << number << " ";
            c++;
        }
    }

    cout << "\n";
    
    return c;
}


double task2() {
    
    cout << "----Task 2----" << endl << endl;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> numbers(-100, 100);
    
    //1v (static array)
    int Arr[5] = {
        numbers(gen),
        numbers(gen),
        numbers(gen),
        numbers(gen),
        numbers(gen)
    }; //1, 23, 156, 78, 5

    int size = sizeof(Arr) / sizeof(Arr[0]);
    
    //cout << size << endl;
    
    auto Min = min_element(Arr, Arr + size);
    auto Max = max_element(Arr, Arr + size);
    
    cout << *Min << " " << *Max << endl;
    
    //2v (vector array - 2 variables)
    /*vector<int> Arr1 = {4, 2, 8, 1, 9, 5};
    
    auto minIt = min_element(Arr1.begin(), Arr1.end());
    auto maxIt = max_element(Arr1.begin(), Arr1.end());
    
    cout << "Minimum: " << *minIt << endl;
    cout << "Maximum: " << *maxIt << endl;*/
    
    //3v (vector array - 1 variable)
    /*const auto [min, max] = minmax_element(Arr1.begin(), Arr1.end());
    cout << "Min: " <<  *min << endl;
    cout << "Max: " << *max << endl;*/


    cout << "{ ";
    for (int number : Arr) {
        cout << number << " ";
    }
    cout << "}";


    cout << "\n";

    double Avg = (*Min + *Max) / 2.0;
    
    
    return Avg;
}


int main()
{
    cout << "\nCount of positive numbers of array: " << task1() << endl << endl << endl;
    
    cout << "\nAverage of min and max element of array: " << task2() << endl << endl << endl;
    
}

