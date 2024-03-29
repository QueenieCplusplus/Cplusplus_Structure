# Cplusplus_Structure
型別分為內建型別和自定義型別，咱來玩玩類別以外的選擇！

    // 自定義結構型別
    struct Vector {
        int sz; // 數字型別的容器，意義用來裝載元素個數，此具名物件稱為 sz，沒有賦值。
        // 具名物件 element 戴上指標記號的“鑰匙＊”，可以通往某帶有浮點數型別的數值的“位址”。
        double* elem;
    }; //結構必須 ; 結尾

    Vector v;

    // & 代表記憶體位址符號，透過 non-const reference 傳遞 v
    void vectorInitializer(int i, Vector& v) {
        v.sz = i;
        // 配置 i 個 浮點數型別的元素陣列賦予等號左邊的具名變數容器。
        v.elem = new double[i]; 
    }
    
 # initializer_list constructor, 帶有初始值列的建構式
 
     // 前導說明
      [] 為陣列 Array
      <> 為串列，即鏈結陣列 Linked List
      {} 為物件 Object
      func(輸入型別 容器變數): 輸出型別解釋 { 方程式內容。 }
 
     // 用一串列進行初始化行為 
     // , 逗號代表序列符號
     Vector::Vector(std::initializer_list<double> lstDouble)
        :elem{new double[lstDouble.size()]}, sz{static_cast<int>(lstDouble.size())}
        {
        
             // 初始值列複製到元素中
             copy(lstDouble.begin(), listDouble.end(), elem);

        }
    
 # 運用下標函數 subscript 存取成員變數
 
     // 透過方程式中的敘述句的 . 或是 -> 或是 * 關鍵字符號 存取成員。
    void findOutV(Vector v, Vector& refV, Vector* ptrV) {

        int iS = v.sz; // 透過 . 和成員名稱存取物件
        int iR = refV.sz; // 透過 參照和 . 以及成員名稱存取物件
        int iP = ptrV->sz; // 透過指標 * 變數和 -> 提領符號 以及成員名稱存取物件。

    }

