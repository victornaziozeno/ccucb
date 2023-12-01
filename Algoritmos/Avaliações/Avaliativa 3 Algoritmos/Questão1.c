#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char rom[12];
    char car;
    int dec=0, tam=0, tam2=0, num=0, num2=0, bin[20], bin2[20], aux, i, j;
    
    scanf("%s",rom);

    tam=strlen(rom);

    for (i=0; i<tam; i++){
        
        car=rom[i];

        switch (car){
            case 'I':
            num=1;
            break;
            
            case 'V':
            num = 5;
            break;
            
            case 'X':
            num = 10;
            break;
            
            case 'L':
            num = 50;
            break;
            
            case 'C':
            num = 100;
            break;
            
            case 'D':
            num =500;
            break;
            
            case 'M':
            num = 1000;
            break;
            
            default:
            num = 0;
            break;
        }

        if (i<tam-1){
                switch (rom[i+1]){
                case 'I':
                num2 = 1;
                break;
                
                case 'V':
                num2 = 5;
                break;
                
                case 'X':
                num2 = 10;
                break;
                
                case 'L':
                num2 = 50;
                break;
                
                case 'C':
                num2 = 100;
                break;
                
                case 'D':
                num2 = 500;
                break;
                
                case 'M':
                num2 = 1000;
                break;
                
                default:
                num2 = 0;
                break;
            }

            if (num<num2){
                dec-=num;
            }else{
                dec+=num;
                }  
            }else{
              dec+=num;  
            }
        }
    
    aux=dec;
 printf("%s na base 2: ", rom); 
 
    i=0;
    
    while (aux>0){
        bin[i]=aux%2;
        i++;
        aux=aux/2;
    }
    /*
    for(i=0;i<tam2;i++){
        if(bin[i]==0){
            i++;
        }else{
            j=i;
           break; 
        }
   
    }
*/
    
    for(j=i -1;j>=0;j--){
    printf("%d", bin[j]);
    }
    printf("\n");
    printf("%s na base 10: %d \n", rom, dec);
    printf("%s na base 16: %X\n", rom, dec);

    return 0;
}
