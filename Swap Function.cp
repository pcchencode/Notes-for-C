#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


void swap(int &a, int &b) // call by value
{
    int tmpa = a;
    int tmpb = b;
    a = tmpb;
    b = tmpa;
    //cout << a << " " << b<<endl; //如果有加入這行就不用 &a, &b
}

int main(){
    int x,y;
    cout <<"請輸入兩個數字： ";
    cin >> x >> y;
    swap(x,y);
    cout << x << " " <<y<<endl; //如果需要這一行就需要 &a, &b
}

//不同的函數間、裡頭的變數（即使名稱一樣）會在不同的記憶體位址進行運算！！！