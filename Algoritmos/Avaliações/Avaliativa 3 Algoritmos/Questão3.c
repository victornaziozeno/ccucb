#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char placa[10], dia[16];
    char dias[][30]={"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    char validap='c', validad='c';
    int dig;

    scanf("%s %s", placa, dia);

    for (int i=0; dia[i]; i++){
        dia[i]=toupper(dia[i]);
    }
    if ((strlen(placa)==8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && placa[3]=='-' 
    && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) || (strlen(placa)==7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]))){
        validap='s';
    }

    for (int i=0; i<7; i++){
        if (strcmp(dia, dias[i])==0){
            validad='s';
            break;
        }
    }

    if (validap=='s' && validad=='s'){
        dig = placa[strlen(placa)-1]-'0';

        if ((strcmp(dia, "SEGUNDA-FEIRA")==0 && (dig==0 || dig==1)) || (strcmp(dia, "TERCA-FEIRA")==0 && (dig==2 || dig==3)) || (strcmp(dia, "QUARTA-FEIRA")==0 && (dig==4 || dig==5)) || (strcmp(dia, "QUINTA-FEIRA")==0 && (dig==6 || dig==7)) || (strcmp(dia, "SEXTA-FEIRA")==0 && (dig==8 || dig==9))) {
            printf("%s nao pode circular %s\n", placa, dia);
        }else if(strcmp(dia, "SABADO")==0 || strcmp(dia, "DOMINGO")==0) {
            printf("Nao ha proibicao no fim de semana\n");
        }else{
            printf("%s pode circular %s\n", placa, dia);
        }
    }else{
        if (validap!='s'){
            printf("Placa invalida\n");
        }
        if (validad!='s'){
            printf("Dia da semana invalido\n");
        }
    }
}
