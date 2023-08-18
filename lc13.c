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

//transfer roman to integer one by one
int decimalTransfer(char a){
    switch (a){
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        break;
    }
}

//determine which decimal should be minus
int romanToInt(char* s){
    int ans=0;
    for (int i=0; i<strlen(s); i++){
        if (decimalTransfer(s[i])<decimalTransfer(s[i+1])){
            ans-=decimalTransfer(s[i]);
        }
        else ans+=decimalTransfer(s[i]);
    }
    return ans;
}

int main(){
    char romanNum[16];
    scanf("%s", romanNum);
    printf("%d",romanToInt(romanNum));
}