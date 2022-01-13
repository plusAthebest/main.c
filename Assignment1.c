#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char strnum[1000];
int num[1000];

int isPrimeNumber(int num);

int main(int argc, char * argv[]){
    
    int i=0,totalnum=0,min=0,max=0;
    
    
    
    while(i<argc-1){
        num[i]=atoi(argv[i+1]);
        ;
        i++;
    }
    
    totalnum = i;
    

    
    if(isPrimeNumber(num[0])==0){
        min = num[0];
        max = num[0];
    }
    
    
    for(i=1;i<totalnum;i++){
        
        if(isPrimeNumber(num[i])==0){
            if(min > num[i]){
                min = num[i];
            }
            if(max < num[i]){
                max = num[i];
            }
        }
    }
    
    if(min == 0 && max ==0){
        printf("Those number is not a prime number, please input another number\n");
    }
    else{
        printf("The smaller prime is %d\n", min);
        printf("The biggest prime is %d\n", max);
    }
    
    return 0;
}


int isPrimeNumber(int num){
    
    
    int primecount=0;
    
    for(int i=1;i<=num;i++){
      
        if(num % i==0){
            primecount++;
        }
    }
    
   
    
    if(primecount == 2)
    {
        return 0;
    }
    return 1;
}
