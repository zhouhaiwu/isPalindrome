#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int *s;
    s = (int *)malloc(112 * sizeof(int));
    int num = x;
    int i = 0;
    int flag = 0;
    if (num < 0) {
        //printf("BBB\n");
        return false;
        //flag = 1;
        //num = 0 - num;
    }
    while (num >= 10) {
        //num = num / 10;
        s[i] = num % 10;
        num = num / 10;
        i++;
    }
    s[i] = num;

    int j = 0;
    //printf("i:%d\n", i);
    while (j < (i - j)) {
        //printf("s[j]:%d\n", s[j]);
        //printf("s[i - j]:%d\n", s[i-j]);
        if (s[j] == s[i - j]) {
            j++;
        }
        else
        {
            //printf("AAA\n");
            return false;
        }
        
    }
    return true;
}

int main() {
    bool flag;
    int x = 121;
    flag = isPalindrome(x);
    printf("flag:%d", flag);
    return 0;
}