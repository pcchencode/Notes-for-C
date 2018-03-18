#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


int main() {
    cout << "1 至 100 之間的質數有：";
    for (int i=2; i<=100; i=i+1){
        for (int j=2; j<i; j=j+1){
            if (i%j==0){
                break;
            }
            else if (i%j!=0 && i==j+1){
                cout << i << " " ;
            }
        }
    }
    cout <<endl;
}
