#include <stdio.h>

int main(){

    if(remove("mahasiswa.txt") == 0){  
        printf("File mahasiswa.txt nerhasil dihapus");

    }else {
        printf("file gagal dihapus");
    }
    return 0;
}