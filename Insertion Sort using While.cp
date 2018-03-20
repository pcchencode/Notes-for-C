#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
#include <time.h> // 計算程式運算的標題檔

using namespace std;


int main(){ //for loop裡面有個重複迴圈while在跑
    int j,tmp;
    int arr[] = {87, 5, 4, 3, 2};
    
    for (int i=1; i<=4; i++){
        tmp = arr[i]; //棒棒插入的地方,因為會一直調換，所以需要一個tmp做暫存
        j = i-1;
        
        while(j>=0 && tmp < arr[j]){
            //做掉換位置的地方，所以要全部用變數j來置換，如果用變數i置換順序不會移動
            arr[j+1] = arr[j]; //雖然實際上j+1=i，但這邊不能寫i，要不然換順序永遠不會移動
            arr[j] = tmp;
            j = j-1;
        }
        
        
    }
    
    
    for (int i=0; i<=4;i++){ //Show the result array
        cout << arr[i]<<" ";
    }
    cout <<"\n";
    
}

