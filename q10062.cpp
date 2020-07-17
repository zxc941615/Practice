#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // int asc[130]={0};
    string str;
    // char str[1000];
    int count = 0;
    bool succ = false;
    while(getline(cin,str)){
        if (succ)
        {
            cout << endl;
        }
        
        int asc[130] = {0};
        for(int i=0;i<str.length();i++){
            asc[(int)str[i]]++;
            count = max(count, asc[(int)str[i]]);
        }
        // int len = sizeof(asc) / sizeof(int);
        // sort(asc,asc+len);
        // sort(asc);
        // cout << asc << endl;
        for (int i = 1; i <= count; i++)
        {
            for(int j = 130 ; j >= 0;j--){
                if(asc[j]>0&&asc[j]==i){
                    cout << j << " " << asc[j] << endl;
                    succ = true;
                }
            }
        }
    } 
   return 0;
}