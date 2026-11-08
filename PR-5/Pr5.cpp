#include <iostream>
#include <vector>

using namespace std;


int task1() {
    
    cout << "----Task 1----" << endl << endl;
    
    int n;
    long int num;
    int sum = 0;
    
    vector<long int> numbers = {};
    
    cout << "Enter numbers count: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        
        numbers.push_back(num);
    }
    
    for (long int number : numbers) {
        cout << number << " ";
        if (number % 2 == 0 && number > 0) {
            sum = sum + number;
        }
    }
    cout << "\n";
    
    return sum;
}


double task2() {
    
    cout << "----Task 2----" << endl << endl;

    double x;
    unsigned int n;
    double y = 0;

    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for n: ";
    cin >> n;

    cout << "\n";

    for (int i = 2; i <= n; i++) {
        y = y + ((x - i) / (x + i + 1));
        //cout << "y = " << y << " i = " << i << endl;
    }
    
    return y;
}


void task3() {
    cout << "----Task 3----" << endl << endl;

    int p = 24;
    int v1 = 3;
    int v2 = 4;
    int v3 = 6;

    vector<int> vihecles = {v1, v2, v3};

    cout << "Material quantity (T): " << p << endl << endl;

    for (int i = 0; i < vihecles.size(); i++) {
        cout << "Vehicles, that required for transporting material with load capacity " << vihecles[i] << ": " << p / vihecles[i] << endl;
    }
}


int main()
{
    cout << "\nResult for Task 1: " << task1() << endl << endl << endl;
    
    cout << "\nResult for Task 2: " << task2() << endl << endl << endl;
    
    task3();
}








//синтаксис тернарного оператора:
//умова ? інструкція якщо умова істина : якщо умова хибна;
