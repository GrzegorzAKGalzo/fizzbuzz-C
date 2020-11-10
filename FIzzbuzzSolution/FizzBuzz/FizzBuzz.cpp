#include <iostream>
#include <string>
using namespace std;

string fizzBuzz(int a) {
    if (a%3 == 0 && a % 5 ==0) {
        return "Fizz Buzz";
    }else if (a % 3 == 0) {
        return "Fizz";
    }else if (a % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(a);
    }
}

int main()
{
    int maxNumber = 0;
    cin >> maxNumber;
    if (maxNumber == NULL || maxNumber < 0 || maxNumber == 0) {
        cout << "Please insert correct number. Bigger than 0!. Tahnk you" << endl;
    } else {
        for (int i = 1; i <= maxNumber; i++) {
            cout << fizzBuzz(i) << ", ";
        }
    }
}
