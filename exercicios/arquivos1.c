#include <stdio.h>
#include <stdlib.h>

void print_file_content(char *path){
    FILE *arq = fopen(path, "w+");
    char str[100];
    if(arq){

        int i = 0;
        while (i < 20){
            fputs("cebola verde\n", arq);
            i++;
        }


        //fseek(arq, 0, SEEK_SET); fseek << rewind
        rewind(arq);
        while (!feof(arq)){
            fgets(str,100, arq);
            printf("%s", str);
        }  

        

        printf("\n");
        int close = fclose(arq);
        if (close == 0)
            printf("Operacao bem sucedida!\n");
        else
            printf("Falha ao fechar o arquivo.\n");     
    }
}

int main(){    
    print_file_content("teste.txt");

    return 0;
}