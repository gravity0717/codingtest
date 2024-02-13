// 1. 배열의 이름은 포인터 역할을 한다
// 2. 배열의 이름을 함수에 전달하면 배열의 포인터가 전달되는 것이다. (Call-by-reference)
// 3. var 의 값은 바뀌지 않은 대신(Call-by-value), list 는 바뀌는 것을 볼 수 가 있다.


#include<cstdio>
#define MAX_SIZE 10

void sub(int x, int arr[]){
    x = 10;
    arr[0]=10;
}

int main(){
    int var;
    int list[MAX_SIZE];

    var = 0;
    list[0] = 0;
    sub(var, list);
    
    printf("var=%d, list[0]=%d\n", var, list[0]);
}