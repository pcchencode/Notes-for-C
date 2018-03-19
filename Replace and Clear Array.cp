#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


int main(){
    int arr[3]={1,2,3};
    string sarr[3]={"你好嗎","好","嗎"};
    int tarr[3]={0};
    string tsarr[3]={"尼"};
    tarr[2]=arr[2];
    tsarr[0] = sarr[0];
    cout << tarr[2] <<endl;
    cout << tsarr[0] <<endl;
    
}

