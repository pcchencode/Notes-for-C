#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


void Multi5(int n){
    if (n%5==0){
        cout <<"這是五的倍數"<<endl;
    }
    else {
        cout <<"這不是五的倍數"<<endl;
    }
}

int main() {
    int n;
    cout <<"請輸入一個整數：";
    cin >> n;
    Multi5(n);
}
