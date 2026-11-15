#include <iostream>
#include <vector>
#include <random>

using namespace std;


double task1() {
    
    cout << "----Task 1----" << endl << endl;
    
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> numbers(-100, 100);

    int Arr[2][3] = {
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)}
    };
    
    vector<int> NegativeArr = {};

    cout << "{\n";
    for (int i = 0; i < 2; i++) {
        cout << " { ";
        for (int j = 0; j < 3; j++) {
            cout << Arr[i][j] << " ";

            if (Arr[i][j] < 0) {
                NegativeArr.push_back(Arr[i][j]);
            }
        }
        cout << "}";
        cout << '\n';
    }
    cout << "}\n\n";


    double Avg = 0.0;
    int c = 0;

    if (NegativeArr.empty()) {
        cout << "No negative elements found in the array." << endl;
        return 0.0;
    }
    cout << "Negative numbers of array: ";
    for (int negativeElement : NegativeArr) {
        cout << negativeElement << " ";

        Avg += negativeElement;
        c++;
    }


    cout << "\n\n";


    Avg = Avg / c;

    return Avg;
}


void task2() {
    
    cout << "----Task 2----" << endl << endl;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> numbers(-100, 100);
    
    int Arr[5][3] = {
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)},
        {numbers(gen), numbers(gen), numbers(gen)}
    };

    vector<int> NaturalRowIndices = {};


    cout << "{\n";
    for (int i = 0; i < 5; i++) {
        bool isNaturalRow = true;

        cout << " { ";
        for (int j = 0; j < 3; j++) {
            cout << Arr[i][j] << " ";

            if (Arr[i][j] < 0) {
                isNaturalRow = false;
            }
        }
        cout << "}";
        cout << '\n';

        if (isNaturalRow) {
            NaturalRowIndices.push_back(i);
        }
    }
    cout << "}\n\n";
    
    
    if (NaturalRowIndices.empty()) {
        cout << "No natural rows found in the array." << endl;
    } else {
        cout << "Natural row indices: ";
        for (int index : NaturalRowIndices) {
            cout << index << " ";
        }
        
    }

}


int main()
{

    cout << "\nAverage of all negative elements of array: " << task1() << endl << endl << endl;
    
    task2();
    cout << endl << endl << endl;
    
    return 0;
}
