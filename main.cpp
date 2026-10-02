#include <iostream>
#include <string>
using namespace std;

float pow3(float x){
    return x*x*x;
}

string sumstrok(string s1, string s2, string s3){
    return s1 + s2 + s3;
}

int main(){
    cout << pow3(3);
    cout << endl<< sumstrok("a", "b", "c");
}
