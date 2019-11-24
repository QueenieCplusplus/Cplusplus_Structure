// 2019, 11/24, by Queenie
// self-defined structure 自定義結構型別

#include <iostream>
#include <utility>

// 自定義結構型別
struct Vector {
    int sz; // 數字型別的容器，意義用來裝載元素個數，此具名物件稱為 sz，沒有賦值。
    // 具名物件 element 戴上指標記號的“鑰匙＊”，可以通往某帶有浮點數型別的數值的“位址”。
    double* elem;
}; //結構必須 ; 結尾

Vector v;

// 第二個參數，編程者我自身需要想一下...
void vectorInitializer(int i, Vector& v) {
    v.sz = i;
    // 配置 i 個 浮點數型別的元素陣列賦予等號左邊的具名變數容器。
    v.elem = new double[i]; 
}

int main(){

    // 第二個參數，編程者我自身需要想一下...
    vectorInitializer(6, v);
    return 0;

}