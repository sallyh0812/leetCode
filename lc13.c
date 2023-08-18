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
int decimalTransfer(char *a){
    if (*a=='I') return 1;
    else if (*a=='V') return 5;
    else if (*a=='X') return 10;
    else if (*a=='L') return 50;
    else if (*a=='C') return 100;
    else if (*a=='D') return 500;
    else if (*a=='M') return 1000;
    else return -1; //avoid reach end of non-void function
}

//determine which decimal should be minus
int romanToInt(char* s){
    int ans=0;
    for (int i=0; i<strlen(s); i++){
        if (decimalTransfer(&s[i])<decimalTransfer(&s[i+1])){
            ans-=decimalTransfer(&s[i]);
        }
        else ans+=decimalTransfer(&s[i]);
    }
    return ans;
}

int main(){
    char romanNum[16];
    scanf("%s", romanNum);
    printf("%d",romanToInt(romanNum));
}