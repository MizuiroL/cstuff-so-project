#include <stdio.h>

void main(void) {
    FILE *filePointer;
    int n = 512;
    char buffer[n];
    
    filePointer = fopen("/dev/urandom", "r");
    fread(buffer, 1, n, filePointer);
    
    int arraySize = sizeof(buffer)/sizeof(buffer[0]);
    
    for(int i=0; i<arraySize; i++){
        printf("%02x ", buffer[i] & 0Xff);
    }
    
    printf("\n");
    fclose(filePointer);
}
