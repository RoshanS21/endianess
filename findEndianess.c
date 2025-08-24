#include<stdint.h>
#include<stdio.h>

int main()
{
    uint32_t num = 0x12345678;
    printf("The number in memory is: 0x%x\n\n", num);
    
    uint8_t *firstByte = (uint8_t*)&num;
    printf("The first byte using uint8_t pointer is: 0x%x\n", *firstByte);
    printf("The second byte using uint8_t pointer is: 0x%x\n", *(firstByte + 1));
    printf("The third byte using uint8_t pointer is: 0x%x\n", *(firstByte + 2));
    printf("The fourth byte using uint8_t pointer is: 0x%x\n\n", *(firstByte + 3));

    char *byte = (char*)&num;
    printf("The first byte is: 0x%x\n", byte[0]);
    printf("The second byte is: 0x%x\n", byte[1]);
    printf("The third byte is: 0x%x\n", byte[2]);
    printf("The fourth byte is: 0x%x\n\n", byte[3]);

    if(byte[0] == 0x78)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}
