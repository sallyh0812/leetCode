//Roman to int
/*I             1
V             5
X             10
L             50
C             100
D             500
M             1000*/
#include <stdio.h>
#include <string.h>

int romanToInt(char* s){
    if (*s=='I'){
        return 1;
    }
    else if (*s=='V'){
        return 5;
    }
    else if (*s=='X'){
        return 10;
    }
    else if (*s=='L'){
        return 50;
    }
    else if (*s=='C'){
        return 100;
    }
    else if (*s=='D'){
        return 500;
    }
    else if (*s=='M'){
        return 1000;
    }
}

int main(){
    char romanNum[15];
    scanf("%s", romanNum);
    int integer[15]={0};
    int ans=0;
    for (int i=0; i<strlen(romanNum); i++){
        integer[i]=romanToInt(&romanNum[i]);     
    }
    for (int i=0; i<strlen(romanNum); i++){
        if (integer[i]<integer[i+1]){
            ans-=integer[i];
        }
        else ans+=integer[i];
    }
    printf("%d", ans);
}