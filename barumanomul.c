#include<stdio.h>
int main(){

    int barum1=100,barum2=10,dec=12,barum3=1000;
    int zerono=0,n;
    while(barum1!=0){
       if( barum1%10==0){
        zerono++;
        barum1=barum1/10;
       }
         else
       {
           n=barum1%10;
       }
    }
      while(barum2!=0){
       if( barum2%10==0){
        zerono++;
        barum2=barum2/10;
       }
       else
       {
           n=barum2%10;
       }
       
    }
      while(barum3!=0){
       if(barum3%10==0){

        zerono++;
        barum3=barum3/10;

       }
         else
       {
           n=barum3%10;
       }
    }
    printf("%d",n*dec*zerono);
return 0;
}