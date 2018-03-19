#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;

int main(){
    int search;
    int find=0;
    int arr[5]={1,2,3,4,87};
    cout << "手中的資料為： ";
    for (int i=0; i<5; i++){
        cout <<arr[i]<<" ";
    }
    cout <<"\n";
    cout <<"請輸入欲搜尋的值：";
    cin >> search;
    for (int i=0; i<5; i++){
        if (arr[i]==search){
            cout <<"已找到資料 "<<arr[i];
            find = 1;
        }

    }
    if (find==0){
        cout <<"查無此資料:(";
    }
    cout <<endl;

}
