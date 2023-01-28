#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    char ch;
    int zero=0;
    int one=0; 
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    int six=0;
    int seven=0;
    int eight=0;
    int nine=0;
    for(int i=0;i<len;i++)
    {
        ch=s[i];
        if(ch=='0')zero++;
        if(ch=='1')one++;
        if(ch=='2')two++;
        if(ch=='3')three++;
        if(ch=='4')four++;
        if(ch=='5')five++;
        if(ch=='6')six++;
        if(ch=='7')seven++;
        if(ch=='8')eight++;
         if(ch=='9')nine++;        
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
