#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;

void calculate(int a, int b, int c){
    cout << "總和 = "<< a + b + c<<endl;
    cout << "平均 = "<< (a+b+c)/3<<endl;
}


int main(){
    int a,b,c;
    cout <<"請輸入您的國文、英文、數學成績：";
    cin >> a >> b >> c;
    calculate(a,b,c);
}
