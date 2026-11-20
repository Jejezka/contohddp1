#include <stdio.h>

int main(){

    FILE *tambah;

    tambah = fopen("mahasiswa.txt", "a");

    if (tambah == NULL){
    printf("file gagal dibuka");
    return 1;
}

    //Tambahkan data
    fprintf(tambah, "\n NAMA : John\n");
    fprintf(tambah, "\n NIM : 6729238073\n");
    fprintf(tambah, "\n NILAI : 92\n");

    fclose(tambah);
    printf("Data berhasil ditambahkan");

    return 0;
}