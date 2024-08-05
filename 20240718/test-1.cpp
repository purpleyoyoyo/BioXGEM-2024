#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // 訪問和修改陣列元素
    cout << "First element: " << arr[0] << endl;
    arr[0] = 10;
    cout << "Modified first element: " << arr[0] << endl;

    // 遍歷陣列
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }

    return 0;
}