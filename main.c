#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("1. 512MB\n");
    printf("2. 1GB\n");
    printf("3. 1GB~4GB\n");
    printf("4. 2GB~8GB\n");
    printf("램을 선택해 주세요:");
    int ram = getchar();
    switch (ram)
    {
    case 1:
        system("java -Xms512MB -Xmx512MB -jar server.jar");
        break;
    case 2:
        system("java -Xms1GB -Xmx1GB -jar server.jar");
        break;
    case 3:
        system("java -Xms1GB -Xmx4GB -jar server.jar");
        break;
    case 4:
        system("java -Xms2GB -Xmx8GB -jar server.jar");
        break;
    default:
        printf("숫자로 정확히 입력해 주세요\n");
        break;
    }
    
}