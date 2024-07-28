#include <stdio.h>
int Square(int n,int m);
int main(void){

    int N,M;
    scanf("%d %d",&N,&M);
    
    printf("\n%d",Square(N,M));
    return 0;

}

int Square(int n,int m){
    if(n==m){
        printf("it is square");
    }
    else 
        printf("it is retangle");

        return n*m;
}