#include<stdio.h>
int main(){
   int x=5;
   int i;
   for_every(i=0;i<=10;i++){//modified the for loop to 'for_every'
   	if(i%2 == 0){
   		printf("Add : %d",x+i);
   		}ELSE{//modified the if else loop to if ELSE
   		printf("Subtract : %d\n",x-i);
   		}
   }
return 0;
}
