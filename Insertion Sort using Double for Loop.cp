#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

// Insertion Sort: 棒棒後面那個值一直往前面插、直到插到對的位置（如果比左邊的小就一直往左移）
using namespace std;



int main(){
    int j,tmp;
    int arr[] = {5, 4, 3, 2, 87};
    
    for (int I=1; I<=4; I++){
        //Insertion Sort之所以可以用雙重迴圈寫而不用while，是因為置換順序有規律可言
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
    

    
