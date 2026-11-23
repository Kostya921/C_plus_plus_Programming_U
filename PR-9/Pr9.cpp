#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int task1(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    
    //cout << "----Task 1----" << endl << endl;
    
    return b + d;
}


int task2(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    
    //cout << "----Task 2----" << endl << endl;

    /*
    a = abs(a);
    b = abs(b);
    c = abs(c);
    d = abs(d);
    */
    // numbers are already unsigned int, so they can`t be < 0

    unsigned int lowest, pre_lowest;


    lowest = min(a, min(b, min(c, d)));

    if (lowest == a) {
        pre_lowest = min(b, min(c, d));
    }
    else if (lowest == b) {
        pre_lowest = min(a, min(c, d));
    }
    else if (lowest == c) {
        pre_lowest = min(a, min(b, d));
    }
    else {
        pre_lowest = min(a, min(b, c));
    }

    

    cout << "The lowest number is: " << lowest << endl;
    cout << "The second lowest number is: " << pre_lowest << endl;

    
    return pow(pre_lowest - lowest, 2);
}


int main()
{

    unsigned int a, b, c, d;

    cout << "Enter 4 natural numbers separated by spaces: ";
    cin >> a >> b >> c >> d;

    cout << "You entered: " << a << ", " << b << ", " << c << ", " << d << endl << endl;


    short int task;

    do {
        cout << "Which task do you want to make solved? (Enter \"1\" or \"2\"): ";
        cin >> task;

        if (task != 1 && task != 2) {
            cout << "Invalid task number. Please enter 1 or 2." << endl << endl;
        }
    } while (task != 1 && task != 2);

    
    cout << endl;


    if (task == 1) {
        cout << "\nThe sum of the second and fourth numbers is: " << task1(a, b, c, d) << endl;
    }
    else {
        cout << "\nThe square of the difference between the lowest and second lowest numbers is: " << task2(a, b, c, d) << endl;
    }
    
 
    return 0;
}


//Вивід значення у консоль по центру екрана конкретним кольором на конкретному фоні
/*
#include <iostream>
#include <string>

// Підключення бібліотек залежно від ОС для отримання розміру консолі
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif

// Функція для отримання ширини та висоти консолі
void getConsoleSize(int& width, int& height) {
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
#else
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    width = w.ws_col;
    height = w.ws_row;
#endif
}

// Увімкнення підтримки ANSI-кодів у Windows 10/11
void enableANSI() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
#endif
}

int main() {
    enableANSI();

    std::string text = "Hello, Center World!";
    int width = 0, height = 0;
    getConsoleSize(width, height);

    // Обчислюємо координати центру
    int x = (width - text.length()) / 2;
    int y = height / 2;

    // Очищаємо екран
    std::cout << "\033[2J";

    // Переміщуємо курсор на позицію (y, x) (нумерація в ANSI починається з 1)
    std::cout << "\033[" << y + 1 << ";" << x + 1 << "H";

    // Встановлюємо колір: 33 (жовтий текст) на 44 (синьому фоні)
    // Потім виводимо текст і скидаємо форматування через \033[0m
    std::cout << "\033[33;44m" << text << "\033[0m";

    // Переміщуємо курсор вниз, щоб системне повідомлення про завершення не перекрило текст
    std::cout << "\033[" << height << ";1H";

    return 0;
}
*/
