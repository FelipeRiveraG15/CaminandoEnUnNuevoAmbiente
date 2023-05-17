#include<stdio.h>

main(){
    int opc,basura,cantidad;
    int RA=0,ROA=0,RNA=0;

    printf("                   BIENVENIDO AL CLASIFICASDOR DE BASURAS\n");

    do{

         printf("\nPor favor ingrese una opcion\n\n1) ingresar basura \n\n2) consultar contenedor\n\n3) salir\n\n=");
         scanf("%d", &opc);

         switch(opc){

             case 1:
                 printf("\n\nIngrese el material de la basura:\n\n");
                 printf("1) Plastico\n2) Carton\n3) Vidrio\n4) Papel\n5) Metal\n6) Restos de comida\n7) Desechos agricolas\n8) Papel higienico\n9) Servilletas\n10) Papeles metalizados\n11) Residuos hospitalarios\n=");
                 scanf("%d",&basura);
                 printf("\ncantidad:");
                 scanf("%d",&cantidad);

                 if(basura>=1 && basura<=5){RA=RA + cantidad;

                    printf("\nRegistro exitoso\n");
                 }

                 else if(basura>=6 && basura<=7){

                    ROA=ROA +cantidad;

                    printf("\nRegistro exitoso\n\n");
                 }

                 else if(basura>=8 && basura<=11){

                    RNA=RNA +cantidad;

                    printf("\nRegistro exitoso\n\n");

                 }

                 else {printf("\nOpcion incorrecta porfavor ingrese otra opcion valida\n\n");}
                 break;


             case 2:
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

\\Gelen Lopez Ruiz y Felipe Rivera Granoble
