#include <iostream>
using namespace std;

void reverse(){
    int n;
    cin >> n;

    if ( n == 0){
        return;
    }

    reverse();
    cout << n << endl;
}
int main(){
    reverse();
    return 0;
}
