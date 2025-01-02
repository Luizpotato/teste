#include <stdio.h>
#include <string.h>


void helloWorld(){
    printf("hello  world\n");
}

int main(){
    for (int i = 0; i < 5; i++){
        printf("%d: ",i+1);
        helloWorld();
    }
    

return 0;
}