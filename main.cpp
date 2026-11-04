#include <iostream>
#include <string>
using namespace std;

float pow3(float x){
    return x*x*x;
}

string sumstrok(string s1, string s2, string s3){
    return s1 + s2 + s3;
}

int pow2(int x){
    return x*x;
}

int main(){
    cout << pow3(4);
    cout << endl<< sumstrok("a", "b", "c");
}
