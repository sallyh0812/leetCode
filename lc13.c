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
    int integer[16]={0};
    int ans=0;
    for (int i=0; i<strlen(s); i++){
        if (s[i]=='I') integer[i]=1;
        else if (s[i]=='V') integer[i]=5;
        else if (s[i]=='X') integer[i]=10;
        else if (s[i]=='L') integer[i]=50;
        else if (s[i]=='C') integer[i]=100;
        else if (s[i]=='D') integer[i]=500;
        else if (s[i]=='M') integer[i]=1000;
    }
    for (int i=0; i<strlen(s); i++){
        if (integer[i]<integer[i+1]){
            ans-=integer[i];
        }
        else ans+=integer[i];
    }
    return ans;
}
int main(){
    char romanNum[15];
    scanf("%s", romanNum);
    printf("%d",romanToInt(romanNum));
}
