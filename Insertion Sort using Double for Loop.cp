#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;



int main(){
    int j,tmp;
    int arr[] = {5, 4, 3, 2, 87};
    
    for (int I=1; I<=4; I++){
    
        for (int i=I; i>0; --i){ //棒棒直接插在最後一根的情形
            j = i-1;
            tmp = arr[j];
            if (arr[i] < arr[j]){
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    
    
    for (int i=0; i<=4;i++){ //Show the result array
        cout << arr[i]<<" ";
    }
    cout <<"\n";
    
    }
    

    
