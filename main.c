#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("1. 512MB\n");
    printf("2. 1GB~4GB\n");
    printf("3. 2GB~8GB\n");
    printf("램을 선택해 주세요:");
    int ram = getchar();
    if(ram==1){
        system("java -Xms512MB -Xmx512MB -jar server.jar")
    }
}