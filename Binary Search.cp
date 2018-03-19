#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;

int getMinPos(int arr[], int len){
    int minpos = 0;
    for(int i=1;i<len;i++){
        if (arr[i] < arr[minpos])
            minpos = i;
    }
    return minpos;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void selsort(int arr[], int len){
    for(int i=0;i<len;i++){
        int min = i + getMinPos(&arr[i], len-i);
        swap(arr[i], arr[min]);
    }
}

int main(){
    int search;
    int arr[] = {19, 52, 43, 3, 87};
    // Binary Search 須先對資料做排序，所以第一步先排序資料
    cout <<"排序前資料： ";
    for (int i=0; i<5; i++){
        cout << arr[i]<< " ";
    }
    cout <<"\n";
    cout <<"請輸入欲搜尋資料： ";
    cin >> search;
    cout <<"排序後資料： ";
    selsort(arr, 5);
    for (int i=0;i<5;i++){
        cout << arr[i]<<" ";
    }
    
    //第二步開始做Binary Search演算法
    int low=0, high=5,middle = 0;
    do{
        if ((low+high)%2 ==0){
            middle = (low+high)/2;
        }
        else if ((low+high)%2 != 0){
            middle = (low+high)/2 +1;
        }
        
        if (arr[middle] < search){
            low = middle +1;
        }
        else if (arr[middle] > search){
            high = middle -1;
        }
        else if (arr[middle]==search){
            break;
        }
                                      }while(high>=low);
    cout <<endl;
    if (low > high){
        cout <<"找不到資料:("<<endl;
        
    }
    else {
        cout << "已找到資料"<<endl;
    }

    
    
    
    cout <<endl;

    
}
