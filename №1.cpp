#include <iostream>

using namespace std;
int numberOfCigaretts;
bool mena(int numberOfCigaretts){
    int numberOfKotlyGeneralskie = 10;
    if (numberOfCigaretts == numberOfKotlyGeneralskie){
        return true;
    } else{
        return false;
    }
}

main(){
    cin >> numberOfCigaretts;
    cout << mena(numberOfCigaretts);
}
