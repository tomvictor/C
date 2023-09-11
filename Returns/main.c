#include <stdio.h>
#include <stdbool.h>

bool check_num() {
    return true;
}

int main() {
    printf("Demo\n");

    if(check_num()){
        printf("no error\n");
    }else{
        printf("error");
    }
    return 0;
}
