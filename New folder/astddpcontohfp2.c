#include <stdio.h>
int main () {

    FILE *fp;
    fp = fopen("mahasiswa.txt", "w"); // bbuka file(w=write/nulis)
    
    //ngecek fiile
    if (fp == NULL){
        printf("FILE gagal dibuka");
        return 1;
    }

    fprintf(fp,"Nama : Jezka\n");
    fprintf(fp,"NIM : 672026089\n");
    fprintf(fp,"Nilai : 101\n");
    fclose(fp);

    printf("data berhasil di simpan");
}