#include<iostream>
using namespace std;
//added .gitignore

string func(int a, int b, int c){
    if(a < b){
        if(b < c) return "STAIR\n";
        else if(b > c) return "PEAK\n";
        else return "NONE\n";
    }
    else return "NONE\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << func(a, b, c);
    }
    return 0;
}