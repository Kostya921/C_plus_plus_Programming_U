#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
//#include <print> //for printing bool values as true or false (not used)

using namespace std;


bool task1() {

    cout << "----Task 1----" << endl << endl;
    
    unsigned int A;
    
    cout << "Enter value for A: ";
    cin >> A;

    return ((A % 2 == 0) && (A >= 100 && A <= 999));
}


void task2() {

    cout << "----Task 2----" << endl << endl;

    int n;
    
    cout << "Enter value for n: ";
    cin >> n;
    
    if (abs(n) < 15) {
        if (n > 0) {
            for(short int i = 10; i < 100; i++) {
                if ((i / 10 + i % 10) == n) {
                    cout << i << " ";
                }
            }
        }
        else if (n < 0) {
            for(short int i = -10; i > -100; i--) {
                if ((i / 10 + i % 10) == n) {
                    cout << i << " ";
                }
            }
        }
        else {
            cout << "For 0 doesn't exist two-digit numbers with a sum of digits equal to 0";
        }
    }
    else {
        cout << "|n| >= 15!";
    }


}


void task3() {
    cout << "----Task 3----" << endl << endl;

    double a;
    double b;
    double h;
    double x;
    double Y;
    int Max_func_len;
    
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for h: ";
    cin >> h;

    Y = cos(b) + log(b) - exp(b);

    string lenght = to_string(Y);

    Max_func_len = lenght.size() - 2; //-2 for correct size

    //cout << Max_func_len << endl;

    //cout << string(Max_func_len, '-') << endl;

    if (a <= 0 || h <= 0) {
        cout << "\nValues must satisfy a > 0 and h > 0.\n";

    }
    else {
        cout << "\nTable of function Y = cos(x) + ln(x) - e^x"
         << " from " << a << " to " << b << " with step " << h << "\n\n";

        cout << fixed << setprecision(4);
        cout << "+" << string(Max_func_len + 6, '-') << "+" << string(Max_func_len + 6, '-') << "+\n";
        cout << "|" << setw(Max_func_len + 6) << "Argument (x)"
            << "|" << setw(Max_func_len + 6) << "Function (Y)" << "|\n";
        cout << "+" << string(Max_func_len + 6, '-') << "+" << string(Max_func_len + 6, '-') << "+\n";

        for (x = a; x <= b; x += h) {
            Y = cos(x) + log(x) - exp(x);
            cout << "|" << setw(Max_func_len + 6) << x
                << "|" << setw(Max_func_len + 6) << Y << "|\n";
        }
        cout << "+" << string(Max_func_len + 6, '-') << "+" << string(Max_func_len + 6, '-') << "+\n";
    }
    

}



int main() {
    cout << boolalpha; // <-- print true or false instead of 1 or 0
    cout << "Result for Task 1: " << task1() << endl << endl << endl;
    cout << noboolalpha;

    task2();
    cout << endl << endl << endl;

    task3();
    cout << endl << endl << endl;
}
