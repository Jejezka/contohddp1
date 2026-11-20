#include <stdio.h>
int main () {

    FILE *fp;
    fp = fopen("catatan.txt", "w"); // bbuka file(w=write/nulis)
    fprintf(fp,"Halo nama saya Jezka\n");
    fclose(fp);

    printf("File berhasil dibuat");
    return 0;
}