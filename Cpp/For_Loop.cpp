#include <iostream>
#include <cstdio>
using namespace std;

void english_repre(int n) {
    if (n == 1) cout << "one";
    else if (n == 2) cout << "two";
    else if (n == 3) cout << "three";
    else if (n == 4) cout << "four";
    else if (n == 5) cout << "five";
    else if (n == 6) cout << "six";
    else if (n == 7) cout << "seven";
    else if (n == 8) cout << "eight";
    else if (n == 9) cout << "nine";
    cout << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) english_repre(i);
        else if (i % 2) cout << "odd" << endl;
        else cout << "even" << endl;
    }
    return 0;
}
