#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bubblesort(int array[], int length){
    for (int i=0; i<length; i++){
        for (int j=i+1; j<=length; j++){
            if (array[i] > array[j] ){
                swap(array[i], array[j]);
            }
        }
    }
}
// 最大值有如氣泡一樣，每次執行都會跑到最右邊去。
// 已排序的會先在最右邊出現



int main(){
    double START,END;
    START = clock();
    int a,b,c,d,e;
    cout<<"請分別輸入五個數字用來排序：";
    cin>> a>> b >> c >> d >> e;

    int arr[] = {a, b, c, d, e};

    bubblesort(arr, 5);
    for (int i=0;i<5 ;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
    END = clock();
    cout << endl << "程式執行所花費：" << (double)clock()/CLOCKS_PER_SEC << " S" ;
    cout << endl << "進行運算所花費的時間：" << (END - START) / CLOCKS_PER_SEC << " S" << endl;
    return 0 ;

}

