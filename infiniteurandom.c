#include <stdio.h>

void main(void) {
    FILE *filePointer;
    int n = 1;
    char buffer[n];
    
    filePointer = fopen("/dev/urandom", "r");
    
    for(;;){
        fread(buffer, 1, n, filePointer);
        printf("%02x ", buffer[0] & 0Xff);
    }
    
    printf("\n");
    fclose(filePointer);
}
