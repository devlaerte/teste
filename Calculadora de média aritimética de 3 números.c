
//calcula media aritimetica de x numeros
#include <stdio.h>

void main(){
     int k, numero;
     float media, quantidade;
     float anterior=0;
     
     printf("Informe quantos numeros irao ser calculados \n");
     scanf("%f", &quantidade);
     
     printf("Ok, iremos calcular a media aritimetica de %.1f \n", quantidade);
     
     for( k=0; k< quantidade ; k++){
          
          printf("Informe o numero %d \n", k+1);
          scanf( "%d", &numero);
          anterior += numero;
          }   
          
          media= anterior / quantidade;
          
          printf(" A media aritimetica dos numeros eh %.2f", media);
          
          getch();

}
    
