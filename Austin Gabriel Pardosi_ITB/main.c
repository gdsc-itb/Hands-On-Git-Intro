#include <stdio.h>

#include <stdio.h>
void red () {
  printf("\033[1;31m");
}

void reset () {
  printf("\033[0m");
}

int main() {
    red();
    printf("Nama");
    reset();
    printf(" : Austin Gabriel Pardosi\n");
    red();
    printf("Jurusan");
    reset();
    printf(" : Teknik Informatika\n");
    red();
    printf("Universitas");
    reset();   
    printf(" : Institut Teknologi Bandung\n");
    red();
    printf("Alasan ingin masuk GDSC");
    reset(); 
    printf(": Saya ingin menambah serta mengembangkan");
    printf(" kemampuan saya di bidang programming, serta memperluas relasi saya.");

    return 0;
}