#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

// Selection Sort從第一個開始、依序把最小值移到最前面
int main(){
    int arr[]={8,9,3,2,1,23,87,24,66};
    for (int i=0; i<10; i++){
        for (int j=i+1; j<10; j++){
            if (arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            
            }
        }
    }
    // Show the Result
    for (int i=0; i<9;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
    
}