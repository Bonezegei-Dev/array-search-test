/*
 * Author : Jofel Batutay
 * 
 *
*/

#ifndef __UTIL_H_INCLUDED__
#define __UTIL_H_INCLUDED__

//karaan nga code
int src(char ar[],char *cmp,int n){
    int a;
    char tmp[32];
    for(a=0; a<32; a++){
        tmp[a]=0;}
    for(a=0; a<strlen(cmp); a++){
        tmp[a]=ar[a+n];}
    return strcmp(tmp,cmp);
}

int  src2cnt=0;
char src2data[64];

void src2(char ar[],int n){
    src2cnt=0;
    int a=0;
    for(a=0; a<64; a++)src2data[a]=0;
    a=0;
    while(ar[n+a]!=';'){
        src2data[a]=ar[n+a];
        a++;
        src2cnt++;
    }
}

///ar1 src  ar2 dst
void src2copy(char ar1[],char ar2[]){
    int a=0;
    for(a=0; a<strlen(ar1)+1; a++){
        ar2[a]=ar1[a];
    }
}

void src2clear(char arr[]){
    int a=0;
    for(a=0; a<strlen(arr); a++){
        arr[a]=0;
    }
}


#endif
