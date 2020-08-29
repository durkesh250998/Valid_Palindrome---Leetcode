#include<stdio.h>
#include<string.h>
int main(){
       char str[10];
       scanf("%s",str);
       int count=0;
       for(int i=0;i<strlen(str);i++){
                     if(str[i]!=str[strlen(str)-i-1]){
                                    count=1;
                                    break;
                     }
       
       }
                  
       if(count){
                 printf("NOT VALID...");
       }
       else{
                 printf("VALID...");
       }
  }
