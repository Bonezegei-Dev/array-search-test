#include <stdio.h>
#include "util.h"

//array of strings to be extracted
char *data="device=100; active=78;";

//varibles
int device=0;
int active=0;

int main(){
   for(int a=0; a<strlen(data); a++){
        if(src(dat,"device=",a)==0){
            a+=7;
            src2(dat,a);
            device=atoi(src2data);
            a+=src2cnt;
         }
         if(src(dat,"active=",a)==0){
            a+=7;
            src2(dat,a);
            active=atoi(src2data);
            a+=src2cnt;
         }
    }
  
}
