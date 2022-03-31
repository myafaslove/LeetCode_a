#include <iostream>

using namespace std;

int reTimes(int num) {
    int flag = 0;
    while (num != 1) {
//        cout << num << endl;
        if (num % 2 == 0) {
            num = num / 2;
            flag += 1;
        } else {
            num = (3 * num + 1) / 2;
            flag += 1;
        }
//        cout << flag << endl;
    }
    return flag;
}

int main() {
    int num;
    cin >> num;
    cout << reTimes(num) << endl;
    return 0;
}
