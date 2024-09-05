#include <iostream>

using namespace std;

int fat(int i) {
    if (i <= 1) {
        return 1;
    } else {
        return (i * fat(i - 1));
    }
}

int main() {
    for (int i = 1; i <= 12; i++) {
        int result = fat(i);
        cout << "!" << i << " = " << result << endl;
    }
}
