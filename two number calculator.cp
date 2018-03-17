#include <cstdlib>
#include <iomanip> //設定輸出長度setw()的標頭檔
#include <iostream> // cin & cout的標頭檔
#include <cmath> // 引入數學函數運算的標題檔
using namespace std;


int main() {
    int number1, number2;
    string symbol; // 字元變數就盡量用string來宣告
    cout << "請輸入第一個數字："<<endl;
    cin >> number1;
    cout << "請輸入第二個數字："<<endl;
    cin >> number2;
    cout << "請輸入運算符號+, -, *, /:"<<endl;
    cin >> symbol;
    if (symbol=="+") {
        cout << number1 + number2<<endl;
    }
    else if (symbol=="-"){
        cout << number1 - number2<<endl;
    }
    else if (symbol=="*"){
        cout << number1 * number2<<endl;
    }
    else {
        cout << number1 / number2<<endl;
    }
    
}
