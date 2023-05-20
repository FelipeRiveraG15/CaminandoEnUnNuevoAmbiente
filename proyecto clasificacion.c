//gelenlopez y  felipe rivera   
//clsificador de basura
#include<stdio.h>
#include <string.h>

#define CANT 11

main(){
    int opc,basura,cantidad,i;
    int RA=0,ROA=0,RNA=0;
    int vec[11];
    int vec2[] = {0,0,0,0,0,0,0,0,0,0,0};
    char *lista[CANT] = {"Plastico","Carton","Vidrio","Papel","Metal","Restos de comida","Desechos agricolas","Papel higienico","Servilletas","Papeles metalizados","Residuios hospitalarios"};



    printf("                   BIENVENIDO AL CLASIFICASDOR DE BASURAS\n");

    do{

         printf("\nPor favor ingrese una opcion\n\n1) ingresar basura \n\n2) consultar contenedor\n\n3) salir\n\n=");
         scanf("%d", &opc);

         switch(opc){

             case 1:

                 printf("\n\nIngrese la cantidad en cada material de basura\n\n");

                 for( i=0; i<11; i++ ){
                    printf( "\n%s = ", lista[i] );
                    scanf("%d",&vec[i]);
                    vec2[i] = vec[i]+vec2[i];
                 }
                 break;


             case 2:

                 RA=vec2[0]+vec2[1]+vec2[2]+vec2[3]+vec2[4];
                 ROA=vec2[5]+vec2[6];
                 RNA=vec2[7]+vec2[8]+vec2[9]+vec2[10];

                 printf("\nEn este momento el contenedor tiene la siguientes cantidades:\n\n");
                 printf("residuos aprovechables = %d\n", RA);
                 printf("residuos organicos aprovechables = %d\n", ROA);
                 printf("residuos no aprovechables = %d\n\n", RNA);
                 break;

             case 3:

                 return(0);
                 break;

             default: printf("\n\nOpcion incorrecta porfavor ingrese otra opcion valida\n\n");
             break;

             }
        }

    while(opc!=3);

    }
