#include <iostream>

int main() {
    using namespace std;

    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int space = 0; space < rows - i; ++space) {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "@ ";
        }

        cout << endl;
    }

    return 0;
}
