#include <iostream>
#include <cmath>
using namespace std;

int getCVal(int a, int b) {
    return round(sqrt(pow(a,2)+pow(b,2)));
}

int main() {
    int max_l;
    cout << "Please enter maximum leg value: ";
    cin >> max_l;
    int score = 0;
    for (int i = 0; i<10; i++)
    {
        int a = rand() % (max_l + 1);
        int b = rand() % (max_l + 1);
        int c = getCVal(a, b);
        int guess;
        cout << a << " " << b << " __ : ";
        cin >> guess;
        int diff = guess - c;
        score += abs(diff);
        cout << diff << endl;
    }
    cout << "Score: " << score << endl;
    return 0;
}

