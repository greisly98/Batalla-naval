#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int MatrizInicial() // Funcion para los Tableros.
{   int m=0,n=0,x=0,y=0;
    int MatrizPc[m][n], MatrizJ[m][n];

    printf(" \n");
    printf("          \t    Bienvenido a Batalla Naval \n\n");
    
    //MatrizPc
    
    printf("\t| A || B || C || D || F || G || H || I || J || K | \n");
    printf("\t=================================================== \n");
	printf("");
    
    for(x=0;x<10;x++){
    	printf("   %d",x);
    	printf("\t");
    	for(y=0;y<10;y++){
    	printf("|~~~|", MatrizPc[x][y]);
    	
		}
		         	printf("\n");
	}
    printf("\t===================================================\n");
    
    printf(" \n"); // Separador de Tableros
        printf("\t*************************************************** \n"); // Separador de Tableros
	printf(" \n"); // Separador de Tableros
    
    //MatrizJugador
    
    printf("\t| A || B || C || D || F || G || H || I || J || K | \n");
    printf("\t=================================================== \n");
	printf("");
    
    for(x=0;x<10;x++){
    	printf("   %d",x);
    	printf("\t");
    	for(y=0;y<10;y++){
    	printf("|~~~|", MatrizJ[x][y]);
    	
		}
		         	printf("\n");
	}
    printf("\t===================================================\n");
    printf(" \n");
    
} 


void ListaBarcos () { // Barcos segun reglas Hasbro.
    int f=0,c=0;
	int PortaAviones[f][c]; // 5 espacios.
	int Acorazado1[f][c]; // 4 espacios.
	int Acorazado2[f][c]; // 4 espacios.
	int Destructor1[f][c]; // 3 espacios.
	int Destructor2[f][c]; // 3 espacios.
	int Destructor3[f][c]; // 3 espacios.
	int Submarino1[f][c]; // 3 espacios.
	int Submarino2[f][c]; // 3 espacios.
	int Submarino3[f][c]; // 3 espacios.
	int Fragata[f][c]; // 2 espacios.
    }
    
    
void PortaAviones (){ // Funcion para Porta-Aviones.
    int m=0,n=0,x=0,y=0;
    int MatrizJ[m][n];
    int s=10,a=10,X=0,Y=0,i=0,j=0,coordenadas=0,coordenadas1[s][a];
	int t=0,NumNave=0, Pop=0,Bandera=0,MiMatriz[s][a];
	char LetraNave[2];
     	
	printf("\nUbica a tu PortaAviones. \n Esta nave tiene 5 espacios.\n");
	printf("  Ingresa las coordenadas de esta Nave.\n\n");
	
	for (t=0;t<5;t++){

	do{
  	printf("Ingresa un numero para la fila \nen la que estara el Porta-Aviones:");
  	if (scanf(" %d",&NumNave)==1){
  		Bandera=Bandera+1;
	  }
	  else {
	  	fflush(stdin);
	  	printf("Error, solo debes ingresar numeros.");
	  }
}while (Bandera==0);
    printf("\n");     
	         
    Bandera=0;
	do{
  	printf("Ingresa un dfrgo para la fila \nen la que estara el Porta-Aviones:");
  	if (scanf(" %d",&Y)==1){
  		Bandera=Bandera+1;
	  }
	  else {
	  	fflush(stdin);
	  	printf("Error, solo numero.");
	  }
}while (Bandera==0);
        
	MatrizJ[NumNave][Y]=1;
	t++;
    printf("\n");  
	
	MiMatriz[NumNave-1][Y-1]='X';     
    coordenadas1[NumNave][Y]='X';
    coordenadas=coordenadas+1;
    srand(time(NULL));  
	system("cls");
}
}	
	

main(){ // Inicio del Juego.
	
	int X=0, Y=0;
	int s=10, a=10;
	MatrizInicial();
	printf("          \tEs momento de posicionar tus barcos!\n");
	printf("          \tPiensa sabiamente!");
	printf("\n");
	printf("          \t    ");
	
	PortaAviones (); // Llamada de la funcion Porta-Aviones
	printf("Porta-Aviones listo!!!");
    system("PAUSE");
	system("cls")	;
	

    system("PAUSE");
    return EXIT_SUCCESS;
}

