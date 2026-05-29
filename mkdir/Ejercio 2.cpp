#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vec(10);
    int res = 0;
    int n = 10;
    cout << "Ingresa 10 numeros enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++) {
        res = vec[i] * vec[i] + res;
    }
    cout << "La norma acumulada es: " << res << endl;

    return 0;
}
