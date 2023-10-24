    #include <stdio.h>
    
    int main (){
    
    int valor[10],res,i;
    
    for(i=0;i<10;i++){
        scanf("%d",&valor[i]);
    }
    
    for(i=0;i<9;i++){
    printf("%d ",valor[i]);
    }
    
    //-------------------------------------------
    printf("\n");
    
    for(i=0;i<9;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    for(i=0;i<9;i++){
    printf("%d ",valor[i]);
    }
    //-------------------------------------------
    printf("\n"); 
    
    for(i=0;i<8;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<8;i++){
    printf("%d ",valor[i]);
    }
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<7;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<7;i++){
    printf("%d ",valor[i]);
    }
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<6;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<6;i++){
    printf("%d ",valor[i]);
    }   
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<5;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<5;i++){
    printf("%d ",valor[i]);
    }    
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<4;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<4;i++){
    printf("%d ",valor[i]);
    }    
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<3;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<3;i++){
    printf("%d ",valor[i]);
    }    
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<2;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<2;i++){
    printf("%d ",valor[i]);
    }   
    
    //-------------------------------------------
    printf("\n");   
    
    for(i=0;i<1;i++){
    res=valor[i]+valor[i+1];
    valor[i]=res;
    }
    
    for(i=0;i<1;i++){
    printf("%d ",valor[i]);
    }  
    return 0;
    }
