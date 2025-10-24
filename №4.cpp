#include <iostream>
using namespace std;

unsigned long long power(unsigned long long x, unsigned long long p){
    if (p == 0) return 1;
    if (p == 1) return x;
    if (p < 0) return power(1/x, -p);
    if (p % 2 == 0){
        return power(x*x,p/2);
    } else{
        return x*power(x*x,(p-1)/2);
    }
}

int main(){
    unsigned long long num,stepen;
    cin >> num;
    cin >> stepen;
    cout << power(num,stepen);
}
