    #include <stdio.h>
    int main() {
        char s[] = "first azorean win";
        int i;
        for (i = 0; s[i] != '\0'; ++i);
        
        printf("este nome tem: %d\n", i);
        return 0;
    }