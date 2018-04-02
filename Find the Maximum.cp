#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;



int main(){

    int arr[] = {5, 4, 3, 233, 87};
    int max = arr[0];
    for (int i=0; i<=3; i++){
        if (arr[i+1]>max){
            max = arr[i+1];
        }
        
        
        
    }
    cout <<max<<endl;
}


