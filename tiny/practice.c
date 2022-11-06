#include <stdio.h>
#include <string.h> //strtok 함수가 선언된 헤더 파일
//#include <cstring> //C++일 경우

int main() {
    // char str[] = "/cgi-bin/adder"; //대상 문자열 
    // char *temp = strtok(str,"/"); //'/'을 기준으로 문자열 자르기
    
    // while (temp != NULL) { //널이 아닐때까지 반복
    //     printf("%s\n",temp); // 출력
    //     temp = strtok(NULL, " ");	//널문자를 기준으로 다시 자르기
    // }
    
    char str[] = "/cgi-bin/adder?1500&213";//대상 문자열
    char *temp = strtok(str,"?"); //'?'을 기준으로 문자열 자르기

    while (temp != NULL) { //널이 아닐때까지 반복
        printf("%s\n",temp); // 출력
        temp = strtok(NULL, " ");	//널문자를 기준으로 다시 자르기
    }

   temp = strtok(temp,"&");
    while (temp != NULL) { //널이 아닐때까지 반복
        printf("%s\n",temp); // 출력
        temp = strtok(NULL, " ");	//널문자를 기준으로 다시 자르기
    }
	
    return 0;
}