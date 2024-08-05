#include <iostream>
using namespace std;

// 函數定義
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4); // 函數調用
    cout << "The result is: " << result << endl;

    return 0;
}