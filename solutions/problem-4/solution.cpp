#include <iostream>
using namespace std;

 bool checkPalindrome(int num)
 {
    int reverseNum =0;
    int testNum = num;
    while(num != 0)
    {
        reverseNum = reverseNum*10 + num%10;
        num = num/10;
    }
    if(testNum == reverseNum)
        return (true);
    else
        return (false);
 }
 int main()
 {
    int maxNum = 0;
    int db = 1;
    int num1, num2;
    for (num1 = 100; num1 <= 999 ; num1 += 1)
    {
        if(num1%11 == 0)
                {
                    db = 1;
                    num2 = 999;
                }
                else
                {
                    db = 11;
                    num2 = 990;
                }
        for (; num2 >= 100; num2 -= db)
        {
            if(num2>=num1)
            {
                int testNum = num1*num2;
                if(testNum>=maxNum)
                {
                    if(checkPalindrome(testNum))
                    {
                        //cout<<num1<<"*"<<num2<<"="<<testNum<<"\n";
                        if(testNum>maxNum)
                            maxNum = testNum;
                    }
                }
            }
        }
    }
    cout << maxNum;
 }
