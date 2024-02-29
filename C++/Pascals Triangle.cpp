#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}