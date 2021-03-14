//
//  main.cpp
//  cpp_test_2
//
//  Created by mirror on 2021/1/26.
//

#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    int step = numRows * 2 - 2; // 间距
    int index = 0;// 记录s的下标
    int len = s.length();
    int add = 0; // 真实的间距
    string ret;
    int i=0;
    //int rowLen=len/step+2;
    
    for(i=0;i<numRows;i++){//每行的循环
        index=i;
        add=2*i;
        while(index<len){//计算每行的角标
            ret+=s[index];
            add=step-add;
            index+=(i==0||i==numRows-1)? step:add;
        }
    }
    cout<<ret;
    return ret;
    }

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    convert("PAYPALISHIRING",3);
    return 0;
}
