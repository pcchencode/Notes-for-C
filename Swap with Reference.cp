#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


void swap(int &a, int &b) // call by value
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int x,y;
    cout <<"請輸入兩個數字： ";
    cin >> x >> y;
    swap(x,y);
    cout << x << " " <<y<<endl;
}
