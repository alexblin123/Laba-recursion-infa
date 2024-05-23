#include <iostream>
#include <string>

using namespace std;

int main() {

    system("chcp 1251 > Null");

    string str;

    cout << "Введите предложение: "; getline(cin, str);
    int m = str.size();

    for (int i = 0; i < m / 2; i++) {
        for (int k = 0; k < i; k++) {
            cout << " ";
        }
        cout << str[i];
        for (int j = i; j < m - i; j++) {
            cout << " ";
        }
        cout << str[m - i - 1] << endl;
    }
    return 0;
}
