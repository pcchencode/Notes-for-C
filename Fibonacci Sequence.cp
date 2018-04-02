#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;



int main(){
    int arr[20];
    arr[0]=0;
    arr[1]=1;
    cout << arr[0] << " "<< arr[1]<< " ";
    for (int i=2; i<=19; i++ ){
        arr[i]=arr[i-1]+arr[i-2];
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}


