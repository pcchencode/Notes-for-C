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

int findMinPos(int array[], int length){
    int minPos = 0;
    for (int i=0; i<length; i++){
        if (array[i] < array[minPos]){
            minPos = i;
        }
    }
    return minPos;
}


void selectionsort(int array[], int length){
    for (int i=0; i<length; i++){
        if (i != findMinPos(array, length-i) ){
            swap(array[i], array[i+findMinPos(&array[i], length-i)]);
        }
    }
}



int main(){
    int arr[]={8,9,3,2,1};
    selectionsort(arr, 5);
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;

}

