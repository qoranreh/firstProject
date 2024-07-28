#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
char str[100];
  fgets(str,100,stdin);

  char a='a';//소문자 a의 aski
  for(int i=0;i<26;i++)
  {
    if(strchr(str, a))//strchr는 문자가 포함되어 있지 않으면 NULL을 뱉는다. 
    {
      char *ptr = strchr(str, a);//a('a')가 등장하는 index주소를 포인터 변수 *ptr에 저장 
      int index = ptr - str;//a('a')가 등장하는 index주소- 배열의 맨 앞 주소 하면 index를 구할 수 있음. 
      printf("%d ",index);
    }
    //알파벳이 있을 경우에, 배열안에서의 index을 출력. 
    
     else
     printf("%d ",-1);
    
    a++;
  }
 
}

