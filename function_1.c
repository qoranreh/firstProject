#include <stdio.h>
int Prime(int n,int m);

int main(void){
    int N,M;
    scanf("%d %d",&N,&M);
    int p;
    p= Prime(N,M);
    printf("%d",p);
    printf("code run");
    return 0;
}

int Prime(int n,int m){
   int a=0;

    for(int i=n;i<=m;i++){//i= 소수인지 판단할 수. 
        int b=0;
        for(int j=2;j<i;j++)//소수가 아니면 여기 반복문 빠져나와야
        {
            if(i%j==0){
              b=-1; 
                break;//소수가 아님. for문 나오기
            }
        }
        //i값은 소수다. 
        if(b==0)
        a++;

        //소수 특 1과 자기자신만 나눠짐.
        //2부터 자기자신-1 했을때 나머지가 0이 아님. 

    }
    
    return a;
}
