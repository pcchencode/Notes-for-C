#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


void swap(int a, int b){
    int tmpa = a ;
    int tmpb = b ;
     a = tmpb;
     b = tmpa;
    cout << a <<" "<< b << endl;
}


int main(){
    int a,b;
    cout <<"請輸入兩個數字： ";
    cin >> a >> b;
    swap(a,b);
}
