#include <iostream>
#include<string>

using namespace std;

int sumAll(string n) {
    int sum = 0;
    for (int i = 0; i < n.length(); i++) {
//        cout << n[i] << endl;//测试能否你读出数字
        sum = sum + (n[i] - 48);
    }
    return sum;
}

int main() {
    string py[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "bai", "jiu"};
    cout << py[0] << endl;
    string num = "1234567890987654321123456789";

    return 0;
}
