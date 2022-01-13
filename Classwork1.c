#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
  //atoi atof

    int i,N;
    int *a; // argv <- a
    int sum=0;
    
    N=argc-1;
    a=(int*) malloc (sizeof(int)*N);
    
   
    for(i= 1;i<argc ;i++){
        
        a[i-1]=atoi(argv[i]);
    }
    for(i= 0;i<N ;i++){
        printf("%d\n",a[i]) ;
        sum=sum+a[i];
    }

     printf("Sum = %d\n",sum);
}
