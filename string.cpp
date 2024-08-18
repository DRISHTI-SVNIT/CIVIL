#include<iostream>
#include<string>
using namespace std;
string ctb(int n) {
    int base = calc(n);
    string result = "";
    while(n>0){
        int rem= n % base;
        char digit = (rem < 10) ? (rem +'0'):(rem -10+'A');
        result=digit+result;
        n/=base;
    }
    return result;
}
int main(){
    int n;
    cin >>n;
    strinf result=ctb(n);
    cout << result << endl;
    return 0;
}