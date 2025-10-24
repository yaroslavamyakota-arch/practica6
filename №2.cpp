#include <string>
#include <iostream>
using namespace std;

string brackets(string word) {
    int len = word.length();
    int mid = len/2;
    string res = "";
    if (len <= 1){
        return word;
    }

    for (int i = 0; i < mid-1; i++){
        res += word[i];
        res += "(";
    }

    if (len % 2 == 1){
        res += word[mid-1];
        res += "(";
        res += word[mid];
    } 
    else{
        res += word[mid-1];
        res += word[mid];
    }

    for (int i = mid+1; i < len; i++){
        res += ")";
        res += word[i];
    }
    return res;

}
main(){
    cout << brackets("example") << endl;
    cout << brackets("lkjhgfdsa") << endl;
    cout << brackets("apple") << endl;
    cout << brackets("like") << endl;
    cout << brackets("i") << endl;
    cout << brackets("qwertyunvcxdfg") << endl;
    return 0;
}
