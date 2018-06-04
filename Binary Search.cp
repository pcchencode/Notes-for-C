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
    int arr[] = {19, 52, 43, 3, 87, 78};
    // Binary Search 須先對資料做排序，所以第一步先排序資料
    cout <<"排序前資料： ";
    for (int i=0; i<6; i++){
        cout << arr[i]<< " ";
    }
    cout <<"\n";
    cout <<"請輸入欲搜尋資料： ";
    cin >> search;
    cout <<"排序後資料： ";
    selsort(arr, 6);
    for (int i=0;i<6;i++){
        cout << arr[i]<<" ";
    }
    cout <<"\n";
    //第二步開始做Binary Search演算法：因為這之中low,high,middle位置會跳來跳去，不宜使用雙重for迴圈
    //for loop為計數型迴圈，必須要裡頭的i有一定的規律可言
    //先寫第一步
    int low=0, high=5,middle=0,find=0;
    
    do{
        if ((low+high)%2==0){
            middle=(low+high)/2;
        }
        else if ((low+high%2!=0)){
            middle=floor((low+high)/2); //只要取整數就好，其實取floor或ceil都沒差
        }
        
        if (search < arr[middle]){
            high = middle - 1; // 搜尋值比中間值小、代表靠左側，則中間值當成新的high
        }
        else if (search > arr[middle]){
            low = middle + 1; // 搜尋值比中間值大、代表靠右側，則中間值當成新的low
        }
        else if (search == arr[middle]){
            find=1;
            cout <<"已找到資料";
            break;
        }
    }while(low<=high);
    
    if (find!=1){
        cout <<"查無此資料:(";
    }
    
    cout <<endl;
    
