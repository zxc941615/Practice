// #include <iostream>
// using namespace std;
// int main(){
//     int first,second=0;
//     int one[10];
//     int two[10];
//     while(cin >> first >> second){
//         if(first==0&&second==0){
//             break;
//         }
//         for (int m = 0; m < 10; m++)
//         {
//             one[m] = 0;
//             two[m] = 0;
//         }
//         cout << "init" << endl;
//         int count = 0;
//         int i,j = 0;
//         // cout << first << second << endl;
//         while(first>0){
//             one[i] = first%10;
//             first = first/10;
//             i++;
//             cout << "qq" << endl;
//         }
//         cout << "first" << endl;
//         while(second>0){
//             two[j] = second%10;
//             second = second/10;
//             j++;
//             cout << "qqq" << endl;
//         }
//         cout << "second" << endl;
//         if(i>j){
//             for (int k = 0; k < i; k++)
//             {
//                 if(one[k]+two[k]>=10){
//                     count++;
//                     if(one[k+1]<two[k+1]){
//                         one[k+1] += 1;
//                     }
//                     if(one[k+1]>two[k+1])
//                     {
//                         two[k+1] += 1;
//                     }
//                 }
//             }
//             cout << "i>j" << endl;
            
//         }
//         if(j>i)
//         {
//             for (int k = 0; k < j; k++)
//             {
//                 if(one[k]+two[k]>=10){
//                     count++;
//                     if(one[k+1]<two[k+1]){
//                         one[k+1] += 1;
//                     }
//                     if(one[k+1]>two[k+1])
//                     {
//                         two[k+1] += 1;
//                     }
//                 }
//             }
//             cout << "j>i" << endl;
//         }
//         if(count==0){
//             cout << "No carry operation." << endl;
//         }
//         if(count==1){
//             cout << "1 carry operation." << endl;
//         }
//         if(count>1){
//             cout << count << " carry operations." << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int first,second=0;
    while(cin>>first>>second){
        if (first==0&&second==0)
        {
            break;
        }
        int num = 0;
        int count = 0;
        while (first>0 || second>0)
        {
            num += (first%10) + (second%10);
            if(num>=10){
                count++;
                num = 1;
            }
            else{
                num = 0;
            }
            first = first / 10;
            second = second / 10;
        }
        if(count==0){
            cout << "No carry operation." << endl;
        }
        if(count==1){
            cout << "1 carry operation." << endl;
        }
        if(count>1){
            cout << count <<" carry operations." << endl;
        }
    }
    return 0;
}