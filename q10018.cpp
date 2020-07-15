// #include <stdio.h>
// #include <stdlib.h>

// /* run this program using the console pauser or add your own getch, system("pause") or input loop */
// unsigned long int Palindrome(unsigned long int num);

// int main(int argc, char *argv[]) {
//      int times = 0 ;
//     scanf("%d",&times);
//     while(times--){
//         unsigned long int num = 0 ;
//         scanf("%d",&num);
//         int count = 1;
//         while(1){
//             num += Palindrome(num); 
//             if(num == Palindrome(num)) break;
//             else count++;
//         }
//         printf("%d %lu\n",count,num);
//     } 
//     return 0;
// }

unsigned long int Palindrome(unsigned long int num){
    unsigned long int reverse = 0 ;
    while(num>0){
        reverse = reverse * 10; 
        reverse += num % 10;
        num = num / 10 ;
    }
    return reverse;
}

#include <iostream>
using namespace std;
int main(){
    int times;
    unsigned long num=0;
    cin >> times;
    while(times>0)
    {
        cin >> num;
        int count = 1;
        while(1)
        {
            num += Palindrome(num); 
            cout << num << endl;
            if(num == Palindrome(num)) break;
            else count++;
        }
        cout << count << " " << num << endl;
        times--;
    }
        return 0;
}
