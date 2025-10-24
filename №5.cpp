#include <iostream>
using namespace std;

void subway(int n, int from, int to, int dop) {
    if (n == 1) {
        cout << "Ingredient " << n << " move from " << from << " to " << to << endl;
        return;
    }
    subway(n - 1, from, dop, to);
    cout << "Ingredient " << n << " move from " << from << " to " << to << endl;
    subway(n - 1, dop, to, from);
}

int main() {
    int n;
    cin >> n;
    subway(n, 1, 3, 2);
    return 0;
}
